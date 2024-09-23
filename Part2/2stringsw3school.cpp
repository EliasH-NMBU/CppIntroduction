// strings and string functions
#include <iostream>
#include <string>

main(){
    std::string greeting = "Hello";

    std::cout << greeting << std::endl;
    std::cout << greeting.length() <<  std::endl;

    char greeting2[] = "Hello";  // C-Style String (an array of characters), without use of string library
    std::cout << greeting2 << std::endl;

}