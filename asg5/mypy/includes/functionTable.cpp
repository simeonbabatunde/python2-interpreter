#include <map>
#include <algorithm>
#include "functionTable.h"
#include "literal.h"


bool FunctionTable::found(const std::string& name) const{
  std::map<std::string, const Node*>::const_iterator it = functions.find(name);
  if(it == functions.end()){
    return false;
  }
  return true;
}

void FunctionTable::setValue(const std::string& name, const Node* suite){
  functions[name] = suite;
}

const Node* FunctionTable::getValue(const std::string& name) const{
  std::map<std::string, const Node*>::const_iterator it = functions.find(name);

  if(it == functions.end()){
    throw name+std::string("not found in function suites");
  }
  return it->second;
}
