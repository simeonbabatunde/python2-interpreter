#include <map>
#include <algorithm>
#include "symbolTable.h"
#include "literal.h"


bool SymbolTable::found(const std::string& name) const {
  std::map<std::string, const Literal*>::const_iterator it =
    table.find(name);
  if(it == table.end()){ return false; }

  return true;
}

const Literal* SymbolTable::getValue(const std::string& name) const {
  std::map<std::string, const Literal*>::const_iterator it =
    table.find(name);
  if ( it == table.end() ) throw name+std::string(" not found");
  return it->second;
}

void SymbolTable::setValue(const std::string& name, const Literal* val) {
  table[name] = val;
}
