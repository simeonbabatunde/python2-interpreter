#include <iostream>
#include <typeinfo>
#include <sstream>
#include <cmath>
#include <cstdlib>
#include <iomanip>
#include "ast.h"
#include "tableManager.h"

bool returnFlag = false;
const Literal* reVal = nullptr;

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
    std::cout<< "function " << ident << " not defined " << std::endl;
    throw std::exception();
  }

  tableManage.pushScope();
  tableManage.getSuite(ident)->eval();
  // const Literal* res = TableManager::getInstance().getSymbol()
  tableManage.popScope();


  return reVal;
}

const Literal* PrintNode::eval() const{
  const Literal* eval = Pnode->eval();
  if(eval && !returnFlag){
    eval->print();
  }

  return nullptr;
}

const Literal* FuncNode::eval() const{
  TableManager::getInstance().insertFunction(ident, suite);

  return nullptr;
}

const Literal* SuiteNode::eval() const{
    for(const Node* n: stmts){
      if(!n){
        throw std::string("nullptr suite node came up");
      }
      n->eval();
    }
  return nullptr;
}

const Literal* AsgBinaryNode::eval() const {
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
