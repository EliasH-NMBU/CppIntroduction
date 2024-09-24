#include <iostream>

using namespace std;

// break stops the loop and continue skips the current iteration of the loop.

main() {
    for (int i = 0; i < 10; i++) {
        if (i == 4) {
            continue; // skip the current iteration, so 4 will not be printed
        }
        cout << i << endl;
    }


    


    return 0;

}