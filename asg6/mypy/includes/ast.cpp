#include <iostream>
#include <typeinfo>
#include <sstream>
#include <cmath>
#include <cstdlib>
#include <iomanip>
#include "ast.h"
#include "tableManager.h"

bool returnFlag = false;
const Literal* retVal = nullptr;

const Literal* IdentNode::eval() const {
  const Literal* val = TableManager::getInstance().getSymbol(ident);
  return val;
}

const Literal* StringNode::eval() const {
  const Literal* val = new StringLiteral(str);
  return val;
}

const Literal* CallNode::eval() const{
  TableManager& tableManage = TableManager::getInstance();
  const Node* suite = tableManage.getSuite(ident);
  const Node* list = tableManage.getParameters(ident);

  if(!suite){
    std::cout<< "function '" << ident << "' is not defined " << std::endl;
    throw std::exception();
  }

  if(list){
    std::vector<Node*> arglst = static_cast<const ParamsNode *>(arglist)->getList();
    std::vector<Node*> parameterlist = static_cast<const ParamsNode*>(list)->getList();
    if(arglst.size() != parameterlist.size()){
      std::cout<<"function "<<ident<<" takes "<<parameterlist.size()<<" parameters but "<<arglst.size()<<" are given"<<std::endl;
      throw std::exception();
    }
    tableManage.pushScope();

    for(unsigned int i=0; i<arglst.size(); i++){
      const std::string name = static_cast<const IdentNode*>(parameterlist[i])->getIdent();
      const Literal* res = arglst[i]->eval();
      tableManage.insertSymbol(name, res);
    }
  }else{      // functions without arguments
    std::vector<Node*> arglst = static_cast<const ParamsNode*>(arglist)->getList();
    if(arglst.size() != 0){
      std::cout << "function " << ident << " has no parameters but " << arglst.size() << " are given."<<std::endl;
      throw std::exception();
    }
    tableManage.pushScope();
  }

  static_cast<const SuiteNode*>(suite)->eval();
  tableManage.popScope();

  return retVal;
}

const Literal* PrintNode::eval() const{
  bool reV = TableManager::getInstance().checkName("return");
  const Literal* eval = Pnode->eval();
  if(eval && !reV){
    eval->print();
  }
  return nullptr;
}

const Literal* FuncNode::eval() const{
  bool reV = TableManager::getInstance().checkName("return");
  if(!reV){
    TableManager::getInstance().insertFunction(ident,arglist, suite);
  }
  return nullptr;
}

const Literal* SuiteNode::eval() const{
    for(const Node* n: stmts){
      if(n){
        n->eval();
        if(TableManager::getInstance().checkName("return")){
          break;
        }
      }
    }
  return nullptr;
}

const Literal* ReturnNode::eval() const{
  if(returnVal){
    const Literal* val = returnVal->eval();
    TableManager::getInstance().insertSymbol("return", nullptr);
    retVal = val;
    return val;
  }
  return nullptr;
}

const Literal* AsgBinaryNode::eval() const {
  if(TableManager::getInstance().checkName("return")){
    return nullptr;
  }

  if (!left || !right) {
    throw std::string("error");
  }

  const Literal* res = right->eval();
  const std::string n = static_cast<IdentNode*>(left)->getIdent();

  // Check if it doesn't exist already
  if(!(TableManager::getInstance().checkName(n))){
    TableManager::getInstance().insertSymbol(n, nullptr);
  }
  TableManager::getInstance().insertSymbol(n, res);
  return res;
}



const Literal* AddBinaryNode::eval() const {
  if (!left || !right) {
    throw std::string("error");
  }
  const Literal* x = left->eval();
  const Literal* y = right->eval();
  return (*x+*y);
}

const Literal* SubBinaryNode::eval() const {
  if (!left || !right) {
    throw std::string("error");
  }
  const Literal* x = left->eval();
  const Literal* y = right->eval();
  return ((*x)-(*y));
}

const Literal* MulBinaryNode::eval() const {
  if (!left || !right) {
    throw std::string("error");
  }
  const Literal* x = left->eval();
  const Literal* y = right->eval();
  return ((*x)*(*y));
}

const Literal* DivBinaryNode::eval() const {
  if (!left || !right) {
    throw std::string("error");
  }
  const Literal* x = left->eval();
  const Literal* y = right->eval();
  return ((*x)/(*y));
}

const Literal* IntDivBinaryNode::eval() const {
  if (!left || !right) {
    throw std::string("error");
  }
  const Literal* x = left->eval();
  const Literal* y = right->eval();
  return ((*x).DoubleDivisionOperator(*y));
}

const Literal* ModBinaryNode::eval() const {
  if (!left || !right) {
    throw std::string("error");
  }
  const Literal* x = left->eval();
  const Literal* y = right->eval();
  return ((*x)%(*y));
}

const Literal* PowBinaryNode::eval() const {
  if (!left || !right) {
    throw std::string("error");
  }
  const Literal* x = left->eval();
  const Literal* y = right->eval();
  return ((*x).PowOperator(*y));
}

const Literal* IndexBinaryNode::eval() const {
  if (!left || !right) {
    throw std::string("error");
  }
  const Literal* x = left->eval();
  const Literal* y = right->eval();
  return ((*x).IndexOperator(*y));
}

const Literal* IfNode::eval() const {
  if(!test){
    throw std::string("Invalid test condition for IF");
  }
  const Literal* res = test->eval();
  std::string boolName = static_cast<const StringLiteral*>(res)->getStr();
  if(boolName.compare("False") != 0){
    if(!suite) throw std::string("then statement is null");
    suite->eval();
  }

  return nullptr;
}

const Literal* IfElseNode::eval() const {
  if(!test){
    throw std::string("Invalid test condition");
  }
  const Literal* res = test->eval();
  std::string boolName = static_cast<const StringLiteral*>(res)->getStr();
  if(boolName.compare("False") == 0){
    if(!suite2) throw std::string("else statement is null");
    suite2->eval();
  }else{
    if(!suite1) throw std::string("then statement is null");
    suite1->eval();
  }
  return nullptr;
}

const Literal* LessThanBinaryNode::eval() const {
  const Literal* x = left->eval();
  const Literal* y = right->eval();
  return (*x<*y);
}

const Literal* GreaterThanBinaryNode::eval() const {
  const Literal* x = left->eval();
  const Literal* y = right->eval();
  return (*x>*y);
}

const Literal* LessThanEqualBinaryNode::eval() const {
  const Literal* x = left->eval();
  const Literal* y = right->eval();
  return (*x<=*y);
}

const Literal* GreaterThanEqualBinaryNode::eval() const {
  const Literal* x = left->eval();
  const Literal* y = right->eval();
  return (*x>=*y);
}

const Literal* EqualsBinaryNode::eval() const {
  const Literal* x = left->eval();
  const Literal* y = right->eval();
  return (*x==*y);
}

const Literal* NotEqualBinaryNode::eval() const {
  const Literal* x = left->eval();
  const Literal* y = right->eval();
  return (*x!=*y);
}

const Literal* GreaterThanLessThanBinaryNode::eval() const {
  const Literal* x = left->eval();
  const Literal* y = right->eval();
  return ((*x).GTLTOperator(*y));
}

const Literal* ParamsNode::eval() const {
  return nullptr;
}
