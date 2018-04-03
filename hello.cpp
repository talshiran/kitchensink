//File: hello.cpp
#include <iostream>
using namespace std;

unsigned int Factorial( unsigned int number ) {
    return number <= 1 ? number : Factorial(number-1)*number;
}

int main(void)
{
  cout << "Hello, World\n";
  cout << "Hello, Jenkins\n";

  cout << "I have successfully built and run\n";

  cout << "Factorial of 6 is " << Factorial(6) << "\n";
  return 0;
}