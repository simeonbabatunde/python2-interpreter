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
  const Node* suite = tableManage.getSuite(ident);
  if(!suite){
    std::cout<< "function " << ident << " Not Found" << std::endl;
    throw std::exception();
  }
  tableManage.pushScope();
  suite->eval();
  tableManage.popScope();

  if(returnFlag){
    returnFlag = false;
  }

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
  if(!returnFlag){
    TableManager::getInstance().insertFunction(ident, suite);
  }
  return nullptr;
}

const Literal* SuiteNode::eval() const{
  if(!returnFlag){
    for(const Node* n: stmts){
      if(n) n->eval();
    }
  }
  return nullptr;
}

AsgBinaryNode::AsgBinaryNode(Node* left, Node* right) :
  BinaryNode(left, right) {
  const Literal* res = right->eval();
  const std::string n = static_cast<IdentNode*>(left)->getIdent();
  TableManager::getInstance().insertSymbol(n, res);
}


const Literal* AsgBinaryNode::eval() const {
  if (!left || !right) {
    throw std::string("error");
  }
  const Literal* res = right->eval();
  const std::string n = static_cast<IdentNode*>(left)->getIdent();

  // Check if it already exist
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
