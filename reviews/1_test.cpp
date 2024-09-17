// import the library iostream
#include <iostream>


int remainder(){
    int x = 10;
    int y = 3;
    int z = x % y; // modulo operator, returns the remainder of a division
    std::cout << z << "\n";
    return 0;
}

int whole_num(){
    int x = 10;
    int y = 3;
    int z = x / y; // division operator, returns the quotient of a division, int answer
    std::cout << z << "\n";
    return 0;
}

int float_num(){
    double x = 10;
    int y = 3;
    double z = x / y; // division operator, returns the quotient of a division, float answer
    std::cout << z << "\n";
    return 0;
}

int increment(){
    int x = 10;
    x = x + 5; // add 5 to x
    std::cout << x << "\n";
    return 0;
}

int pluss_one_increment(){
    int x = 10;
    int y;
    int z;

    x++; // increment x by 1, x = 11

    // the side the ++ operator is on determines when the increment happens, either prefix or postfix
    y = x++; // x = 12, y = 11
    z = ++x; // x = 13, z = 13
    std::cout << "different increment operators:\n" << x << "\n" << y << "\n" << z << "\n";
    return 0;
}

main(){
    remainder();
    whole_num();
    float_num();
    increment();
    pluss_one_increment();
    return 0;
}