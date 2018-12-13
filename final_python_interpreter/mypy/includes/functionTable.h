#ifndef FUNCTIONTABLE__H
#define FUNCTIONTABLE__H

#include <iostream>
#include <string>
#include <map>
#include <vector>

class Node;

class FunctionTable{
public:
  FunctionTable(): functions(){}
  bool found(const std::string& name) const;
  void setValue(const std::string& name, const Node* parameters, const Node* suite);
  const Node * getValue(const std::string& name) const;
  const Node* getParameters(const std::string& name) const;

private:
  std::map<std::string, std::pair<const Node*, const Node*> > functions;
};

#endif
