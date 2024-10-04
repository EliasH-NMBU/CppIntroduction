#include <iostream>



int main() {
	
  enum Level {
  OFF,
  LOW,
  MEDIUM,
  HIGH = 5,
  HIGHPLUS
};

  // Create an enum variable and assign a value to it
  enum Level myVar = MEDIUM;
  enum Level increase = HIGHPLUS;
  // Print the enum variable
  std::cout << myVar << std::endl;
  std::cout << increase << std::endl;


  // often used togheter with switches

  switch (increase){
    case 2:
        printf("Medium");
        break;
    case 5:
        printf("High");
        break;
    case 6:
        printf("HIGHPLUS");
        break;
  }
  return 0;
}