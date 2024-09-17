#include <iostream>

int main(){
    // * and / have higher precedence than + and -
    // * and / are evaluated first, then + and -

    double x = 1 + 2 * 3; // 7
    std::cout << x << "\n";

    // use () to change the order of evaluation
    double y = (1 + 2) * 3; // 9
    std::cout << y << "\n";

    double z = (x+10)/(3*y); // 17/27 = 0.629629
    double t = 17.0/27; // you must define numbers as the correct type to get the correct answer
    std::cout << z << "\n" << t <<"\n";
    return 0;
}