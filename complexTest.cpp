#include "Complex.cpp"

int main()
{
  Complex myComplex;
  
  // Intial
  myComplex = Complex(0,0);
  myComplex.printComplex();
  
  // Add and print
  myComplex = myComplex + Complex(2,2);
  cout << endl;
  cout << "After being Added by (2,2i) ";
  myComplex.printComplex();
  
  // Subtract and print
  myComplex = myComplex - Complex(4,1);
  cout << endl;
  cout << "After being subtracted by (4,1i) ";
  myComplex.printComplex();
  
  // Multiply and print
  myComplex = myComplex * Complex(2,7);
  cout << endl;
  cout << "After being multiplied by (2,7) ";
  myComplex.printComplex();
}