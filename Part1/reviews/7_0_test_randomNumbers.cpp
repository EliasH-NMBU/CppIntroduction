#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

int main(){

    srand(time(0));
    int number = rand() % 10; // This will give a random number between 0 and 9
    cout << number << endl;
    return 0;
}