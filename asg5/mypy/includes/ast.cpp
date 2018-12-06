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

  if(!tableManage.checkFunction(ident)){
    std::cout<< "function '" << ident << "' is not defined " << std::endl;
    throw std::exception();
  }

  tableManage.pushScope();
  tableManage.getSuite(ident)->eval();
  // const Literal* res = TableManager::getInstance().getSymbol()
  tableManage.popScope();
  if(returnFlag){
    returnFlag = false;
  }
  return retVal;
}

const Literal* PrintNode::eval() const{
  const Literal* eval = Pnode->eval();
  if(eval && !returnFlag){
    eval->print();
  }
  return nullptr;
}

const Literal* FuncNode::eval() const{
  if(!returnFlag){
    TableManager::getInstance().insertFunction(ident, suite);
  }
  return nullptr;
}

const Literal* SuiteNode::eval() const{
  if(!returnFlag){
    for(const Node* n: stmts){
      if(!n){
        throw std::string("nullptr suite node came up");
      }
      n->eval();
    }
  }
  return nullptr;
}

const Literal* ReturnNode::eval() const{
  returnFlag = true;
  if(returnVal){
    const Literal* val = returnVal->eval();
    retVal = val;
    return val;
  }
  return nullptr;
}

const Literal* AsgBinaryNode::eval() const {
  if(returnFlag){
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
  if(res){
    suite->eval();
  }
  return nullptr;
}

const Literal* IfElseNode::eval() const {
  if(!test){
    throw std::string("Invalid test condition");
  }
  const Literal* res = test->eval();
  if(res){
    suite1->eval();
  }else{
    suite2->eval();
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
