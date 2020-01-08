#include <iostream>
#include "Complex.h"
#include <stdexcept>

using namespace std;

// Intializing numbers
Complex::Complex(double aReal, double aImaginary)
{
  realNum = aReal;
  imaginaryNum = aImaginary;
}

// Prints complex number
void Complex::printComplex()
{
  cout << "The complex number is ("<<realNum <<',' << imaginaryNum <<"i)" << endl;
}

// adds complex number
Complex Complex::operator+(const Complex &add) const
{
  return Complex(realNum + add.realNum, imaginaryNum + add.imaginaryNum);
}

//subtract complex number
Complex Complex::operator-(const Complex &subtract) const
{
  return Complex(realNum - subtract.realNum, imaginaryNum - subtract.imaginaryNum);
}
Complex Complex::operator*(const Complex multiply) const
{
  Complex a;
  a.realNum = realNum * multiply.realNum;
  a.imaginaryNum = imaginaryNum * multiply.imaginaryNum;
  return a;
}

