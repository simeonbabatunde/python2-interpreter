#include "node.h"
#include "poolOfNodes.h"
#include <iomanip>
#include <cmath>
#include <string>
#include <limits>


class Literal : public Node {
public:
  virtual ~Literal() {}

  virtual const Literal* operator+(const Literal& rhs) const =0;
  virtual const Literal* opPlus(float) const =0;
  virtual const Literal* opPlus(int) const =0;
  virtual const Literal* opPlus(const std::string &) const =0;

  virtual const Literal* operator*(const Literal& rhs) const =0;
  virtual const Literal* opMult(float) const =0;
  virtual const Literal* opMult(int) const =0;
  virtual const Literal* opMult(const std::string &) const =0;

  virtual const Literal* operator-(const Literal& rhs) const =0;
  virtual const Literal* opSubt(float) const =0;
  virtual const Literal* opSubt(int) const =0;
  virtual const Literal* opSubt(const std::string &) const =0;

  virtual const Literal* operator/(const Literal& rhs) const =0;
  virtual const Literal* opDiv(float) const =0;
  virtual const Literal* opDiv(int) const =0;
  virtual const Literal* opDiv(const std::string &) const =0;

  virtual const Literal* DoubleDivisionOperator(const Literal& rhs) const =0;
  virtual const Literal* opDDiv(float) const =0;
  virtual const Literal* opDDiv(int) const =0;
  virtual const Literal* opDDiv(const std::string &) const =0;

  virtual const Literal* operator%(const Literal& rhs) const =0;
  virtual const Literal* opMod(float) const =0;
  virtual const Literal* opMod(int) const =0;
  virtual const Literal* opMod(const std::string &) const =0;

  virtual const Literal* PowOperator(const Literal& rhs) const =0;
  virtual const Literal* opPow(float) const =0;
  virtual const Literal* opPow(int) const =0;
  virtual const Literal* opPow(const std::string &) const =0;

  virtual const Literal* IndexOperator(const Literal& rhs) const =0;
  virtual const Literal* opIndex(float) const =0;
  virtual const Literal* opIndex(int) const =0;
  virtual const Literal* opIndex(const std::string &) const =0;


  virtual const Literal* eval() const = 0;
  virtual void print() const {
    std::cout << "No Way" << std::endl;
  }
};


class StringLiteral: public Literal {
public:
 StringLiteral(const std::string & _val): val(_val) {}

  virtual const Literal* operator+(const Literal& rhs) const  {
    return rhs.opPlus(val);
  }
  virtual const Literal* opPlus(float lhs) const  {
    throw std::string("can't add float and string");
  }
  virtual const Literal* opPlus(int lhs) const  {
    throw std::string("can't add int and string");
  }
  virtual const Literal* opPlus(const std::string & lhs) const  {
    const Literal * node = new StringLiteral(lhs + val);
    PoolOfNodes::getInstance().add(node);
    return node;
  }

  virtual const Literal* operator-(const Literal& rhs) const  {
    return rhs.opSubt(val);
  }
  virtual const Literal* opSubt(float lhs) const  {
    throw std::string("can't subtract string and float");
  }
  virtual const Literal* opSubt(int lhs) const  {
    throw std::string("can't subtract string and float");
  }
  virtual const Literal* opSubt(const std::string &) const  {
    throw std::string("can't subtract string and string");
  }

  virtual const Literal* operator*(const Literal& rhs) const  {
    return rhs.opMult(val);
  }
  virtual const Literal* opMult(float lhs) const  {
    throw std::string("can't multiply float and string");
  }
  virtual const Literal* opMult(int lhs) const  {
    std::string s;
    for(int i=0; i<lhs; i++){
      s += val;
    }
    const Literal* node = new StringLiteral(s);
    PoolOfNodes::getInstance().add(node);
    return node;
  }
  virtual const Literal* opMult(const std::string &) const  {
    throw std::string("can't multiply string by string");
  }

  virtual const Literal* operator/(const Literal& rhs) const  {
    return rhs.opDiv(val);
  }
  virtual const Literal* opDiv(float lhs) const  {
    throw std::string("can't divide float by string");
  }
  virtual const Literal* opDiv(int lhs) const  {
    throw std::string("can't divide int by int");
  }
  virtual const Literal* opDiv(const std::string &) const  {
    throw std::string("can't divide string by string");
  }

  virtual const Literal* DoubleDivisionOperator(const Literal& rhs) const  {
    return rhs.opDDiv(val);
  }
  virtual const Literal* opDDiv(float lhs) const  {
    throw std::string("can't int_divide float by string");
  }
  virtual const Literal* opDDiv(int lhs) const  {
    throw std::string("can't int_divide int by string");
  }
  virtual const Literal* opDDiv(const std::string &) const  {
    throw std::string("can't int_divide string by string");
  }

  virtual const Literal* operator%(const Literal& rhs) const  {
    return rhs.opMod(val);
  }
  virtual const Literal* opMod(float lhs) const  {
    throw std::string("can't mod float by string");
  }
  virtual const Literal* opMod(int lhs) const  {
    throw std::string("can't mod int by string");
  }
  virtual const Literal* opMod(const std::string &) const  {
    throw std::string("can't mod int by string");
  }

  virtual const Literal* PowOperator(const Literal& rhs) const  {
    return rhs.opPow(val);
  }
  virtual const Literal* opPow(float lhs) const  {
    throw std::string("can't exponentiate float and string");
  }
  virtual const Literal* opPow(int lhs) const  {
    throw std::string("can't exponentiate int and string");
  }
  virtual const Literal* opPow(const std::string &) const  {
    throw std::string("can't exponentiate int and string");
  }

  virtual const Literal* IndexOperator(const Literal& rhs) const  {
    return rhs.opIndex(val);
  }
  virtual const Literal* opIndex(float lhs) const  {
    throw std::string("can't get float index with string");
  }
  virtual const Literal* opIndex(int lhs) const  {
    throw std::string("can't get string index with string");
  }
  virtual const Literal* opIndex(const std::string &) const  {
    throw std::string("can't get string index with string");
  }


  virtual const Literal* eval() const { return this; }
  virtual void print() const {
    std::cout << val << std::endl;
  }
private:
  std::string val;
};


class FloatLiteral: public Literal {
public:
  FloatLiteral(float _val): val(_val) {}

  virtual const Literal* operator+(const Literal& rhs) const  {
    return rhs.opPlus(val);
  }
  virtual const Literal* opPlus(float lhs) const  {
    const Literal* node = new FloatLiteral(lhs + val);
    PoolOfNodes::getInstance().add(node);
    return node;
  }
  virtual const Literal* opPlus(int lhs) const  {
    const Literal* node = new FloatLiteral(lhs + val);
    PoolOfNodes::getInstance().add(node);
    return node;
  }
  virtual const Literal* opPlus(const std::string &) const  {
    throw std::string("can't add float and string");
  }

  virtual const Literal* operator-(const Literal& rhs) const  {
    return rhs.opSubt(val);
  }
  virtual const Literal* opSubt(float lhs) const  {
    const Literal* node = new FloatLiteral(lhs - val);
    PoolOfNodes::getInstance().add(node);
    return node;
  }
  virtual const Literal* opSubt(int lhs) const  {
    const Literal* node = new FloatLiteral(lhs - val);
    PoolOfNodes::getInstance().add(node);
    return node;
  }
  virtual const Literal* opSubt(const std::string &) const  {
    throw std::string("can't subtract float and string");
  }

  virtual const Literal* operator*(const Literal& rhs) const  {
    return rhs.opMult(val);
  }
  virtual const Literal* opMult(float lhs) const  {
    const Literal* node = new FloatLiteral(lhs * val);
    PoolOfNodes::getInstance().add(node);
    return node;
  }
  virtual const Literal* opMult(int lhs) const  {
    const Literal* node = new FloatLiteral(static_cast<float>(lhs) * val);
    PoolOfNodes::getInstance().add(node);
    return node;
  }
  virtual const Literal* opMult(const std::string &) const  {
    throw std::string("can't multiply float and string");
  }

  virtual const Literal* operator/(const Literal& rhs) const  {
    return rhs.opDiv(val);
  }
  virtual const Literal* opDiv(float lhs) const  {
    if ( val == 0 ) throw std::string("Zero Division Error");
    const Literal* node = new FloatLiteral(lhs / val);
    PoolOfNodes::getInstance().add(node);
    return node;
  }
  virtual const Literal* opDiv(int lhs) const  {
    if ( val == 0 ) throw std::string("Zero Division Error");
    const Literal* node = new FloatLiteral(lhs / val);
    PoolOfNodes::getInstance().add(node);
    return node;
  }
  virtual const Literal* opDiv(const std::string &) const  {
    throw std::string("can't divide float by string");
  }

  virtual const Literal* DoubleDivisionOperator(const Literal& rhs) const  {
    return rhs.opDDiv(val);
  }
  virtual const Literal* opDDiv(float lhs) const  {
    if ( val == 0 ) throw std::string("Zero Division Error");
    const Literal* node = new FloatLiteral(static_cast<float>(floor(lhs / val)));
    PoolOfNodes::getInstance().add(node);
    return node;
  }
  virtual const Literal* opDDiv(int lhs) const  {
    if ( val == 0 ) throw std::string("Zero Division Error");
    const Literal* node = new FloatLiteral(static_cast<float>(floor(lhs / val)));
    PoolOfNodes::getInstance().add(node);
    return node;
  }
  virtual const Literal* opDDiv(const std::string &) const  {
    throw std::string("can't int_divide float by string");
  }

  virtual const Literal* operator%(const Literal& rhs) const  {
    return rhs.opMod(val);
  }
  virtual const Literal* opMod(float lhs) const  {
    if ( val == 0 ) throw std::string("Zero Division Error");
    const Literal* node = new FloatLiteral(lhs - val * floor(lhs/val));
    PoolOfNodes::getInstance().add(node);
    return node;
  }
  virtual const Literal* opMod(int lhs) const  {
    if ( val == 0 ) throw std::string("Zero Division Error");
    const Literal* node = new FloatLiteral(lhs - val * floor(lhs/val));
    PoolOfNodes::getInstance().add(node);
    return node;
  }
  virtual const Literal* opMod(const std::string &) const  {
    throw std::string("can't mod float by string");
  }

  virtual const Literal* PowOperator(const Literal& rhs) const  {
    return rhs.opPow(val);
  }
  virtual const Literal* opPow(float lhs) const  {
    const Literal* node = new FloatLiteral(pow(lhs, val));
    PoolOfNodes::getInstance().add(node);
    return node;
  }
  virtual const Literal* opPow(int lhs) const  {
    const Literal* node = new FloatLiteral(pow(lhs, val));
    PoolOfNodes::getInstance().add(node);
    return node;
  }
  virtual const Literal* opPow(const std::string &) const  {
    throw std::string("can't exponentiate float by string");
  }

  virtual const Literal* IndexOperator(const Literal& rhs) const  {
    return rhs.opIndex(val);
  }
  virtual const Literal* opIndex(float lhs) const  {
    throw std::string("can't get float index with float");
  }
  virtual const Literal* opIndex(int lhs) const  {
    throw std::string("can't get int index with float");
  }
  virtual const Literal* opIndex(const std::string &) const  {
    throw std::string("can't get string index with float");
  }

  virtual const Literal* eval() const { return this; }
  virtual void print() const {
    // The number of digits after the dot, gotten from
    // http://www.cplusplus.com/forum/general/207841/
    float d = val;
    constexpr float precision{ 1e-7 };
    float temp{}; int decimal_places{};
    do {
        d *= 10;
        temp = d - int( d );
        decimal_places++;
    } while( temp > precision && decimal_places < std::numeric_limits<float>::digits10 );

    if(decimal_places != 1){
      std::cout << std::setprecision(5) << val << std::endl;
    }else if(val < 0){
      std::cout << std::setprecision(5) << val << std::endl;
    }else {
      std::cout << std::setprecision(1)<< std::fixed<< val << std::endl;
    }
  }

  virtual const Literal* SliceOperator(const int start, const int stop, \
  const bool isFirstSlice, const bool isSecondSlice, const bool isEmptySlice) const {
    throw std::string("can't get int index with float");
  }

private:
  float val;
};

class IntLiteral: public Literal {
public:
 IntLiteral(int _val): val(_val) {}

  virtual const Literal* operator+(const Literal& rhs) const  {
    return rhs.opPlus(val);
  }
  virtual const Literal* opPlus(float lhs) const  {
    const Literal* node = new FloatLiteral(static_cast<float>(val) + lhs);
    PoolOfNodes::getInstance().add(node);
    return node;
  }
  virtual const Literal* opPlus(int lhs) const  {
    const Literal* node = new IntLiteral(lhs + val);
    PoolOfNodes::getInstance().add(node);
    return node;
  }
  virtual const Literal* opPlus(const std::string &) const  {
    throw std::string("can't add string and int");
  }

  virtual const Literal* operator-(const Literal& rhs) const  {
    return rhs.opSubt(val);
  }
  virtual const Literal* opSubt(float lhs) const  {
    const Literal* node = new FloatLiteral(lhs - val);
    PoolOfNodes::getInstance().add(node);
    return node;
  }
  virtual const Literal* opSubt(int lhs) const  {
    const Literal* node = new IntLiteral(lhs - val);
    PoolOfNodes::getInstance().add(node);
    return node;
  }
  virtual const Literal* opSubt(const std::string &) const  {
    throw std::string("can't subtract string and int");
  }

  virtual const Literal* operator*(const Literal& rhs) const  {
    return rhs.opMult(val);
  }
  virtual const Literal* opMult(float lhs) const  {
    const Literal* node = new FloatLiteral(lhs * val);
    PoolOfNodes::getInstance().add(node);
    return node;
  }
  virtual const Literal* opMult(int lhs) const  {
    const Literal* node = new IntLiteral(lhs * val);
    PoolOfNodes::getInstance().add(node);
    return node;
  }
  virtual const Literal* opMult(const std::string & lhs) const  {
    std::string s;
    for(int i=0; i<val; i++){
      s += lhs;
    }
    const Literal * node = new StringLiteral(s);
    PoolOfNodes::getInstance().add(node);
    return node;
  }

  virtual const Literal* operator/(const Literal& rhs) const  {
    return rhs.opDiv(val);
  }
  virtual const Literal* opDiv(float lhs) const  {
    if ( val == 0 ) throw std::string("Zero Division Error");
    const Literal* node = new FloatLiteral(lhs / val);
    PoolOfNodes::getInstance().add(node);
    return node;
  }
  virtual const Literal* opDiv(int lhs) const  {
    if ( val == 0 ) throw std::string("Zero Division Error");

    const Literal* node = new IntLiteral(floor(static_cast<float>(lhs) / val));
    PoolOfNodes::getInstance().add(node);
    return node;
  }
  virtual const Literal* opDiv(const std::string &) const  {
    throw std::string("can't divide string by int");
  }

  virtual const Literal* DoubleDivisionOperator(const Literal& rhs) const  {
    return rhs.opDDiv(val);
  }
  virtual const Literal* opDDiv(float lhs) const  {
    if ( val == 0 ) throw std::string("Zero Division Error");
    const Literal* node = new FloatLiteral(static_cast<float>(floor(lhs / val)));
    PoolOfNodes::getInstance().add(node);
    return node;
  }
  virtual const Literal* opDDiv(int lhs) const  {
    if ( val == 0 ) throw std::string("Zero Division Error");
    const Literal* node = new IntLiteral(floor(static_cast<float>(lhs) / val));
    PoolOfNodes::getInstance().add(node);
    return node;
  }
  virtual const Literal* opDDiv(const std::string &) const  {
    throw std::string("can't int_divide string by int");
  }

  virtual const Literal* operator%(const Literal& rhs) const  {
    return rhs.opMod(val);
  }
  virtual const Literal* opMod(float lhs) const  {
    if ( val == 0 ) throw std::string("Zero Division Error");
    const Literal* node = new FloatLiteral(lhs - val * floor(lhs/val));
    PoolOfNodes::getInstance().add(node);
    return node;
  }
  virtual const Literal* opMod(int lhs) const  {
    if ( val == 0 ) throw std::string("Zero Division Error");
    const Literal* node = new IntLiteral(lhs - val * floor(lhs/val));
    PoolOfNodes::getInstance().add(node);
    return node;
  }
  virtual const Literal* opMod(const std::string &) const  {
    throw std::string("can't mod string by int");
  }

  virtual const Literal* PowOperator(const Literal& rhs) const  {
    return rhs.opPow(val);
  }
  virtual const Literal* opPow(float lhs) const  {
    const Literal* node = new FloatLiteral(pow(lhs, val));
    PoolOfNodes::getInstance().add(node);
    return node;
  }
  virtual const Literal* opPow(int lhs) const  {
    if(val < 0){
      const Literal* node = new FloatLiteral(pow(lhs, val));
      PoolOfNodes::getInstance().add(node);
      return node;
    }else{
      const Literal* node = new IntLiteral(pow(lhs, val));
      PoolOfNodes::getInstance().add(node);
      return node;
    }
  }
  virtual const Literal* opPow(const std::string &) const  {
    throw std::string("can't exponentiate string and int");
  }

  virtual const Literal* IndexOperator(const Literal& rhs) const  {
    return rhs.opIndex(val);
  }
  virtual const Literal* opIndex(float lhs) const  {
    throw std::string("can't get float index with int");
  }
  virtual const Literal* opIndex(int lhs) const  {
    throw std::string("can't get int index with int");
  }
  virtual const Literal* opIndex(const std::string & lhs) const  {
    try{
      std::string s;
      if(val < 0){
        s = lhs.substr(lhs.size() + val, 1);
      }else{
        s = lhs.substr(val, 1);
      }
      const Literal * node = new StringLiteral(s);
      PoolOfNodes::getInstance().add(node);
      return node;
    }catch ( ... ){
      throw std::string("invalid index operation");
    }
  }



  int getInt() const{
    return val;
  }

  virtual const Literal* eval() const { return this; }
  virtual void print() const {
    std::cout << val << std::endl;
  }
private:
  int val;
};
