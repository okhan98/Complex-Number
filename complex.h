#ifndef COMPLEX_H
#define COMPLEX_H

// class definition
class Complex
{
  public:
          Complex(double=0,double=0);
          
          // functions
          Complex operator+(const Complex&) const;
          Complex operator-(const Complex&) const;
          Complex operator*(const Complex) const;
          void printComplex();
  
  private:
          // data
          double realNum;
          double imaginaryNum;
};

#endif
