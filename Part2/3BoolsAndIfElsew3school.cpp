#include <iostream>
using namespace std;

main(){
    // boolean values
    bool isCodingFun = true;
    bool isFishTasty = false;
    cout << isCodingFun << endl;  // Outputs 1 (true)
    cout << isFishTasty << endl;  // Outputs 0 (false) 


    // boolean expressions
    int x = 11;
    int y = 9;
    cout << (x > y) << endl;  // Outputs 1 (true)
    cout << (x == y) << endl;  // Outputs 0 (false)

    // if statement

    if (x > y) {
        cout << "x is greater than y" << endl;
    }
    else if(x==y){
        cout << "x is equal to y" << endl;
    }
    else {
        cout << "x is not greater than y" << endl;
    }
    switch (x) {
        case 10:
            cout << "x is 10" << endl;
            break;
        case 20:
            cout << "x is 20" << endl;
            break;
        default:
            cout << "value of x unknown" << endl;
    }

    return 0;
    
    }


