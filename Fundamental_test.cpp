#include <iostream>

using namespace std;

int main(){
    double price = 99.99;
    float interestRate = 3.67f; // f makes auto treat it like a float
    long fileSize = 90000L; // L makes auto treat it like a long
    char letter = 'a';
    bool isValid = true;
    auto isnotValid = false;

    int number {1.2}; // This will give a warning because of the bracing and type error
    cout << "The value of number is: " << number << endl;
    return 0;
}