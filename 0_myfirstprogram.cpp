#include <iostream> // header file library that lets us work with input and output objects, such as cout
#include <cmath> // needed for pow, raise to the power of

using namespace std; // means that we can use names for objects and variables from the standard library.

/*
File for testing cpp code
Following w3schools tutorial

    int - stores integers (whole numbers), without decimals, such as 123 or -123
    double - stores floating point numbers, with decimals, such as 19.99 or -19.99
    char - stores single characters, such as 'a' or 'B'. Char values are surrounded by single quotes
    string - stores text, such as "Hello World". String values are surrounded by double quotes
    bool - stores values with two states: true or false

*/
int myNum = 15;
int sum = pow(myNum, myNum);
int x = 5, y = 6, z = 50;

int main() { // main function
  cout << "Hello World! \n" << "\n"; // \n skips to next line
  std::cout << "\"Hello World!\" \n" ; // If performed without namespace std
  cout << sum << "\n"; // This value overflows the available size of int, resulting in a negative value
  cout << x + y + z << "\n";
  cout << pow(2, 3) << "\n";
  return 0; // ends function
}



int casenames(){
  int file_size; // snake Case
  int FileSize; // Pascal case
  int fileSize; // Camel Case
  int iFileSize; // Hungarian Notation
  return 0;
}