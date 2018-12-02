#ifndef SYMBOLTABLE__H
#define SYMBOLTABLE__H

#include <iostream>
#include <string>
#include <map>
#include <algorithm>

class Literal;

class SymbolTable {
public:
  SymbolTable() : table() {}
  bool found(const std::string& name) const;
  void setValue(const std::string& name, const Literal* val);
  const Literal* getValue(const std::string& name) const;
  //void display() const;
private:
  std::map<std::string, const Literal*> table;

};

#endif
