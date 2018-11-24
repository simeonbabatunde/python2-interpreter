#include "keeper.h"


void Keeper::setComplexity(const int complexity){
  m_complexity = complexity;
}

void Keeper::setRowNo(const int rowNo){
  m_rowNo = rowNo;
}

void Keeper::setColNo(const int colNo){
  m_colNo = colNo;
}

void Keeper::setFuncName(const std::string & funcName){
  m_funcName = funcName;
}

void Keeper::setClassName(const std::string & className){
  m_className = className;
}

void Keeper::setRanking(const char rank){
  m_rank = rank;
}

void Keeper::setIsClass(const bool isClass){
  m_isClass = isClass;
}

void Keeper::setBlockType(const char blockType){
  m_blockType = blockType;
}



const int Keeper::getComplexity() const{
  return m_complexity;
}

const int Keeper::getRowNo() const{
  return m_rowNo;
}

const int Keeper::getColNo() const{
  return m_colNo;
}

const std::string Keeper::getFuncName() const{
  return m_funcName;
}

const std::string Keeper::getClassName() const{
  return m_className;
}

const char Keeper::getRanking() const{
  return m_rank;
}

const bool Keeper::getIsClass() const{
  return m_isClass;
}

const char Keeper::getBlockType() const{
  return m_blockType;
}
