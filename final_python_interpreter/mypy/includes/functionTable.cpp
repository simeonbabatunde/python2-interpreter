#include <map>
#include <algorithm>
#include "functionTable.h"
#include "literal.h"


bool FunctionTable::found(const std::string& name) const{
  std::map<std::string, std::pair<const Node*, const Node*> >::const_iterator it = functions.find(name);
  if(it == functions.end()){
    return false;
  }
  return true;
}

void FunctionTable::setValue(const std::string& name, const Node* parameters, const Node* suite){
  functions[name] = std::make_pair(parameters, suite);
}

const Node* FunctionTable::getValue(const std::string& name) const{
  std::map<std::string, std::pair<const Node*, const Node*> >::const_iterator it = functions.find(name);

  if(it == functions.end()){
    throw name+std::string("not found in function suites");
  }
  return it->second.second;
}

const Node* FunctionTable::getParameters(const std::string& name) const{
  std::map<std::string, std::pair<const Node*, const Node*> >::const_iterator it = functions.find(name);

  if(it == functions.end()){
    throw name+std::string("not found in function suites");
  }
  return it->second.first;
}
