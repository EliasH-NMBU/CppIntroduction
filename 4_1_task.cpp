#include <iostream>

using namespace std;

int main(){
    cout << "Enter c for celsius or f for fahrenheit: ";
    char choice;
    cin >> choice;
    cout << "Enter the value you want converted: ";
    int value;
    cin >> value;

    if (choice == 'c'){
        cout << "The value in fahrenheit is: " << value*1.8 + 32 << endl;
    } else if (choice == 'f'){
        cout << "The value in celsius is: " << (value-32) / 1.8 << endl;
    } else {
        cout << "Invalid input." << endl;
    }
    return 0;
}