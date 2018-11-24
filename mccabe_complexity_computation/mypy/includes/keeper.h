#ifndef KEEPER__H
#define KEEPER__H

#include <string>

class Keeper{
public:
  Keeper():m_complexity(0), m_rowNo(0), m_colNo(0), m_funcName(""), m_className(""),\
   m_rank('\0'), m_isClass(false), m_blockType('\0'){}
  void setComplexity(const int complexity);
  void setRowNo(const int rowNo);
  void setColNo(const int colNo);
  void setFuncName(const std::string & funcName);
  void setClassName(const std::string & className);
  void setRanking(const char rank);
  void setIsClass(const bool isClass);
  void setBlockType(const char blockType);

  const int getComplexity() const;
  const int getRowNo() const;
  const int getColNo() const;
  const std::string getFuncName() const;
  const std::string getClassName() const;
  const char getRanking() const;
  const bool getIsClass() const;
  const char getBlockType() const;


private:
  int m_complexity;
  int m_rowNo;
  int m_colNo;
  std::string m_funcName;
  std::string m_className;
  char m_rank;
  bool m_isClass;
  char m_blockType;
};

// Lets write a functor for sorting based on complexity
class SortByComplexity{
public:
  bool operator() (Keeper *k1, Keeper * k2){
    return k1->getComplexity() < k2->getComplexity();
  }
};

#endif
