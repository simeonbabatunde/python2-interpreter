#include <map>
#include <algorithm>
#include "tableManager.h"
#include "literal.h"


TableManager& TableManager::getInstance(){
  static TableManager instance;
  return instance;
}

const Literal* TableManager::getSymbol(const std::string& name){
  int scope = currentScope;

  // Check the current and previous scope for the symbol
  while(scope >= 0){
    if(tables[scope].found(name)){
      const Literal * symbol = tables[scope].getValue(name);
      return symbol;
    }
    --scope;
  }
  // Symbol cannot be found
  std::cout<< "local variable '" << name <<"'referenced before assignment "<<std::endl;
  throw std::exception();
}

const Node* TableManager::getSuite(const std::string& name){
  int scope = currentScope;

  // Check the current scope
  while(scope >= 0){
    if(functions[scope].found(name)){
      const Node * suite = functions[scope].getValue(name);
      return suite;
    }
    --scope;
  }
  return nullptr;
}

const Node* TableManager::getParameters(const std::string& name){
  int scope = currentScope;

  // check currentScope and existint scope
  while(scope >= 0){
    if(functions[scope].found(name)){
      const Node* params = functions[scope].getParameters(name);
      return params;
    }
    --scope;
  }
  return nullptr;
}

void TableManager::insertSymbol(const std::string& name, const Literal* symbol){
  tables[currentScope].setValue(name, symbol);
}

void TableManager::insertFunction(const std::string& name, const Node* parameters, const Node* suite){
  functions[currentScope].setValue(name, parameters, suite);
}


bool TableManager::checkName(const std::string& name) const{
  int scope = currentScope;
  while(scope >= 0){
    if(tables[scope].found(name)) return true;
    --scope;
  }
  return false;
}

bool TableManager::checkFunction(const std::string& name) const{
  int scope = currentScope;
  while(scope >= 0){
    if(functions[scope].found(name)) return true;
    --scope;
  }
  return false;
}

void TableManager::pushScope(){
  tables.push_back(SymbolTable());
  functions.push_back(FunctionTable());
  ++currentScope;
}

void TableManager::popScope(){
  functions.pop_back();
  tables.pop_back();
  --currentScope;
}
