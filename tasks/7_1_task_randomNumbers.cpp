#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

int main(){

    const short minValue=1;
    const short maxValue=6;

    srand(time(0));
    short first = (rand() % (maxValue - minValue + 1)) + minValue;
    short second = (rand() % (maxValue - minValue + 1)) + minValue;
    cout << "The first dice roll is: " << first << endl;
    cout << "The second dice roll is: " << second << endl;
    return 0;
}