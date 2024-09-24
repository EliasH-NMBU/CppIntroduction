#include <iostream>

using namespace std;

main(){
    
    // while loop
    int i = 0;
    cout << "--- While Loop ---" << endl;
    while (i < 5) {
        cout << i << endl;
        i++;
    }

    // The Do/While Loop, ensuring that the loop is executed at least once before checking the condition
    cout << "--- Do/While Loop ---" << endl;
    int j = 0;
    do {
        cout << j << endl;
        j++;
    }
    while (j < 5);

    // for loop
    cout << "--- For Loop ---" << endl;
    for (int k = 0; k < 5; ++k) { // for (initialization; condition; increment/decrement)
        cout << k << endl;
    }

    // for each loop
    cout << "--- For Each Loop ---" << endl;
    string cars[4] = {"Volvo", "BMW", "Ford", "Mazda"};
    for (string car : cars) {
        cout << car << endl;
    }
    
    return 0;

}