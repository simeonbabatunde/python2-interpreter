#include <map>
#include <algorithm>
#include "tableManager.h"
#include "literal.h"


TableManager& TableManager::getInstance(){
  static TableManager instance;
  return instance;
}

const Literal* TableManager::getSymbol(const std::string& name){
  currentScope = tables.size() -1;

  // Check the current scope for the symbol
  if(tables[currentScope].found(name)){
    const Literal * symbol = tables[currentScope].getValue(name);

    // Check if local variable has been assigned
    if(!symbol){
      std::cout<< "local variable '" << name <<"'referenced before assignment "<<std::endl;
      throw std::exception();
    }

    return symbol;
  }else{
    if(tables.size() > 1){
      currentScope = tables.size() - 2; //Move down the stack by one step
      while(currentScope != -1){
        if(tables[currentScope].found(name)){
          const Literal * symbol = tables[currentScope].getValue(name);

          return symbol;
        }
        --currentScope;
      }
    }
  }
  return nullptr;   // Symbol cannot be located.
}

const Node* TableManager::getSuite(const std::string& name){
  currentScope = functions.size() - 1;

  // Check the current scope
  if(functions[currentScope].found(name)){
    const Node * suite = functions[currentScope].getValue(name);

    return suite;
  }else{
    if(functions.size() > 1){
      currentScope = functions.size() -2;
      while(currentScope != -1){
        if(functions[currentScope].found(name)){
          const Node * suite = functions[currentScope].getValue(name);
          return suite;
        }
        --currentScope;
      }
    }
  }
  return nullptr;
}

void TableManager::insertSymbol(const std::string& name, const Literal* symbol){
  currentScope = tables.size()-1;
  tables[currentScope].setValue(name, symbol);
}

void TableManager::insertFunction(const std::string& name, const Node* suite){
  currentScope = functions.size()-1;
  functions[currentScope].setValue(name, suite);
}


bool TableManager::checkName(const std::string& name){
  currentScope = tables.size()-1;
  bool res = tables[currentScope].found(name);
  return res;
}

bool TableManager::checkFunction(const std::string& name){
  currentScope = functions.size()-1;
  bool res = functions[currentScope].found(name);
  return res;
}

void TableManager::pushScope(){
  tables.push_back(SymbolTable());
  functions.push_back(FunctionTable());
}

void TableManager::popScope(){
  if(functions.size() != 1){
    functions.pop_back();
  }
  tables.pop_back();
}
