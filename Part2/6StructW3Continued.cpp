#include <iostream>


int main(){
//struct 

struct {
    int myNum;
    string myString;
} myStructure;

// Asigning values to member of my structure
myStructure.myNum = 1;
myStructure.myString = "Quantum";

// Printing members of struct
std::cout << myStructure.myNum << std::endl;
std::cout << myStructure.myString << std::endl;

// Structs with multiple inheritors
struct carAgency {
  string brand;
  string model;
  int year;
} myCar1, myCar2; // We can add variables by separating them with a comma here

// Put data into the first structure
myCar1.brand = "BMW";
myCar1.model = "X5";
myCar1.year = 1999;

// Put data into the second structure
myCar2.brand = "Ford";
myCar2.model = "Mustang";
myCar2.year = 1969;

// Print the structure members
std::cout << myCar1.brand << " " << myCar1.model << " " << myCar1.year << "\n";
std::cout << myCar2.brand << " " << myCar2.model << " " << myCar2.year << "\n";

carAgency myCar3;
myCar3.brand = "Honda";
myCar3.model = "E";
myCar3.year = "2018"

std::cout << myCar3.brand << " " << myCar3.model << " " << myCar3.year << std::endl;
}