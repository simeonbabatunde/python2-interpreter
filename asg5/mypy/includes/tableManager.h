#ifndef TABLEMANAGER__H
#define TABLEMANAGER__H

#include <iostream>
#include <string>
#include <vector>
#include "symbolTable.h"
#include "functionTable.h"

class Node;
class Literal;

class TableManager{
public:
  static TableManager& getInstance();

  const Literal* getSymbol(const std::string& name);
  const Node* getSuite(const std::string& name);

  void insertSymbol(const std::string& name, const Literal* symbol);
  void insertFunction(const std::string& name, const Node* suite);

  bool checkName(const std::string& name);
  bool checkFunction(const std::string& name);

  void pushScope();
  void popScope();

private:
  int currentScope;
  std::vector<SymbolTable> tables;
  std::vector<FunctionTable> functions;

  TableManager():tables(), functions(){
    tables.push_back(SymbolTable());
    functions.push_back(FunctionTable());
  };
};

#endif
