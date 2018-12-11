#pragma once

//  Declarations for a calculator that builds an AST
//  and a graphical representation of the AST.
//  by Brian Malloy

#include <iostream>
#include <string>
#include <map>
#include "literal.h"

extern void yyerror(const char*);
extern void yyerror(const char*, const char);

class IdentNode : public Node {
public:
  IdentNode(const std::string id) : Node(), ident(id) { }
  virtual ~IdentNode() {}
  const std::string getIdent() const { return ident; }
  virtual const Literal* eval() const;
private:
  std::string ident;
};

class StringNode : public Node {
public:
  StringNode(const std::string & s) : Node(), str(s) { }
  virtual ~StringNode() {}
  virtual const Literal* eval() const;
private:
  std::string str;
};

class CallNode: public Node{
public:
  CallNode(const std::string id, Node* list):Node(), ident(id), arglist(list){}
  virtual ~CallNode(){}
  const std::string getIdent() const { return ident; }
  virtual const Literal* eval() const;
private:
  std::string ident;
  Node* arglist;
};

class FuncNode: public Node{
public:
  FuncNode(const std::string id, Node* list, Node* stmts): ident(id), arglist(list), suite(stmts){}
  virtual ~FuncNode(){}
  const std::string getIdent() const { return ident; }
  virtual const Literal* eval() const;
private:
  std::string ident;
  Node* arglist;
  Node * suite;
};

class PrintNode: public Node{
public:
  PrintNode(Node * p): Node(), Pnode(p){}
  virtual const Literal* eval() const;
protected:
  Node * Pnode;
};

class SuiteNode: public Node{
public:
  SuiteNode(const std::vector<Node*> s): Node(), stmts(s){}
  virtual ~SuiteNode(){}
  virtual const Literal* eval() const;
protected:
  std::vector<Node *> stmts;
};

class ReturnNode: public Node{
public:
  ReturnNode(Node* val): Node(), returnVal(val){}
  virtual ~ReturnNode(){}
  virtual const Literal* eval() const;
protected:
  Node* returnVal;
};


class BinaryNode : public Node {
public:
  BinaryNode(Node* l, Node* r) : Node(), left(l), right(r) {}
  virtual const Literal* eval() const = 0;
  Node* getLeft()  const { return left; }
  Node* getRight() const { return right; }
  BinaryNode(const BinaryNode&) = delete;
  BinaryNode& operator=(const BinaryNode&) = delete;
protected:
  Node *left;
  Node *right;
};

class AsgBinaryNode : public BinaryNode {
public:
  AsgBinaryNode(Node* left, Node* right): BinaryNode(left, right) { }
  virtual const Literal* eval() const;
};

class AddBinaryNode : public BinaryNode {
public:
  AddBinaryNode(Node* left, Node* right) : BinaryNode(left, right) { }
  virtual const Literal* eval() const;
};

class SubBinaryNode : public BinaryNode {
public:
  SubBinaryNode(Node* left, Node* right) : BinaryNode(left, right) { }
  virtual const Literal* eval() const;
};

class MulBinaryNode : public BinaryNode {
public:
  MulBinaryNode(Node* left, Node* right) : BinaryNode(left, right) {}
  virtual const Literal* eval() const;
};

class DivBinaryNode : public BinaryNode {
public:
  DivBinaryNode(Node* left, Node* right) : BinaryNode(left, right) { }
  virtual const Literal* eval() const;
};

class IntDivBinaryNode : public BinaryNode {
public:
  IntDivBinaryNode(Node* left, Node* right) : BinaryNode(left, right) { }
  virtual const Literal* eval() const;
};

class ModBinaryNode : public BinaryNode {
public:
  ModBinaryNode(Node* left, Node* right) : BinaryNode(left, right) { }
  virtual const Literal* eval() const;
};

class PowBinaryNode : public BinaryNode {
public:
  PowBinaryNode(Node* left, Node* right) : BinaryNode(left, right) {}
  virtual const Literal* eval() const;
};

class IndexBinaryNode : public BinaryNode {
public:
  IndexBinaryNode(Node* left, Node* right) : BinaryNode(left, right) {}
  virtual const Literal* eval() const;
};

class IfNode : public Node{
public:
  IfNode(Node* t, Node* s): Node(), test(t), suite(s){}
  virtual ~IfNode(){}
  virtual const Literal* eval() const;
protected:
  Node* test;
  Node* suite;
};

class IfElseNode : public Node{
public:
  IfElseNode(Node* t, Node* s1, Node* s2): Node(), test(t), suite1(s1), suite2(s2){}
  virtual ~IfElseNode(){}
  virtual const Literal* eval() const;
protected:
  Node* test;
  Node* suite1;
  Node* suite2;
};

class LessThanBinaryNode: public BinaryNode{
public:
  LessThanBinaryNode(Node* left, Node* right): BinaryNode(left, right){}
  virtual const Literal* eval() const;
};

class GreaterThanBinaryNode: public BinaryNode{
public:
  GreaterThanBinaryNode(Node* left, Node* right): BinaryNode(left, right){}
  virtual const Literal* eval() const;
};

class EqualsBinaryNode: public BinaryNode{
public:
  EqualsBinaryNode(Node* left, Node* right): BinaryNode(left, right){}
  virtual const Literal* eval() const;
};

class GreaterThanEqualBinaryNode: public BinaryNode{
public:
  GreaterThanEqualBinaryNode(Node* left, Node* right): BinaryNode(left, right){}
  virtual const Literal* eval() const;
};

class LessThanEqualBinaryNode: public BinaryNode{
public:
  LessThanEqualBinaryNode(Node* left, Node* right): BinaryNode(left, right){}
  virtual const Literal* eval() const;
};

class GreaterThanLessThanBinaryNode: public BinaryNode{
public:
  GreaterThanLessThanBinaryNode(Node* left, Node* right): BinaryNode(left, right){}
  virtual const Literal* eval() const;
};

class NotEqualBinaryNode: public BinaryNode{
public:
  NotEqualBinaryNode(Node* left, Node* right): BinaryNode(left, right){}
  virtual const Literal* eval() const;
};

class ParamsNode: public Node{
public:
  ParamsNode(std::vector<Node*> p): Node(), params(p){}
  virtual ~ParamsNode(){}
  std::vector<Node *> getList() const {return params;}
  virtual const Literal* eval() const;
protected:
  std::vector<Node*> params;
};
