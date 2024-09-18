#include <iostream>

using namespace std;

int main(){
    
    // pointers are variables that store the address of another variable
    int x = 5;
    int *pX = &x; // pX is a pointer that stores the address of x
    cout << "--- Pointers ---" << endl;
    cout << "x = " << x << endl;
    cout << "pX = " << pX << endl;
    cout << "*pX = " << *pX << endl; // *pX is the value stored at the address pX

    // pointers can be used to change the value of a variable
    *pX = 10; // change the value of x to 10
    cout << "--- Pointers for value change ---" << endl;
    cout << "x = " << x << endl;

    // pointer address for arrays are not declared since arrays are pointers themselves
    int arr[5] = {1, 99, 3, 4, 5};
    int *pArr = arr; // pArr is a pointer that stores the address of the first element of arr
    cout << "--- Pointers with arrays ---" << endl;
    cout << "arr[0] = " << arr[0] << endl;
    cout << "pArr = " << pArr << endl;
    cout << "*pArr = " << *pArr << endl;
    cout << "*pArr+1 = " << *pArr+1 << endl;
    cout << "*(pArr+1) = " << *(pArr+1) << endl; // equivalent to arr[1]

    // pointers can be used to change the value of an array
    *(pArr+1) = 100; // change the value of arr[1] to 100
    cout << "--- Pointers for array value change ---" << endl;
    cout << "arr[1] = " << arr[1] << endl;

    return 0;
}