#include <iostream>
#include <vector>

using namespace std;

// break stops the loop and continue skips the current iteration of the loop.

main() {
    cout << "continue" << endl;
    for (int i = 0; i < 10; i++) {
        if (i == 4) {
            continue; // skip the current iteration, so 4 will not be printed
        }
        cout << i << endl;
    }

    cout << "arrays" << endl;
    int myNumbers[5] = {1, 2, 3, 4, 5};

    for (int i : myNumbers) { // range-based for loop, for each element in myNumbers
        cout << myNumbers[i-1] << endl;
    }
    // why do I get 32766 
    // because i is the value of the element, not the index of the element
    // so it should be cout << i << endl;

    cout << "omit array size" << endl;
    // omit array size
    int myNumbers2[5] = {1, 2, 3, 4, 5}; // size is 5, better practice to include size

    for (int i : myNumbers2) {
        cout << myNumbers2[i] << endl;
    }

    cout << "add elements to array" << endl;
    // also possible to add elements to an array
    string cars[5];
    cars[0] = "Volvo";
    cars[1] = "BMW";
    cars[2] = "Ford";
    cars[3] = "Mazda";
    cars[4] = "Tesla";  

    cout << "vector as dynamic array" << endl;
    // vector is a dynamic array, can change size
    vector<string> cars2 = {"Volvo", "BMW", "Ford", "Mazda", "Tesla"};
    cars2.push_back("Toyota");


    for (string i : cars2) {
        cout << i << endl;
    }

    // Loop Through an Array with sizeof()
    cout << "Loop Through an Array with sizeof()" << endl;
    int myNumbers3[5] = {1, 2, 3, 4, 5};

    for (int i = 0; i < sizeof(myNumbers3)/sizeof(myNumbers3[0]); i++) {
        cout << myNumbers3[i] << endl;
    }

    // Multi-Dimensional Arrays
    cout << "Multi-Dimensional Arrays" << endl;
    int myNumbers4[2][3] = {
        {1, 2, 3},
        {4, 5, 6}
    };

    for (int i = 0; i < 2; i++) { // 2 rows
        for (int j = 0; j < 3; j++) { // 3 columns
            cout << myNumbers4[i][j] << endl;
        }
    }

    string letters[2][4] = {
    { "A", "B", "C", "D" },
    { "E", "F", "G", "H" }
    };

    cout << letters[0][2];  // Outputs "C" 

    return 0;

}