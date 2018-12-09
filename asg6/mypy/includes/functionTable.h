#ifndef FUNCTIONTABLE__H
#define FUNCTIONTABLE__H

#include <iostream>
#include <string>
#include <map>

class Node;

class FunctionTable{
public:
  FunctionTable(): functions(){}
  bool found(const std::string& name) const;
  void setValue(const std::string& name, const Node* suite);
  const Node * getValue(const std::string& name) const;

private:
  std::map<std::string, const Node*> functions;
};

#endif
