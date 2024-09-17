#include <iostream>
#include <cmath>

using namespace std;

int main(){
    cout << "Enter a radius: ";
    double radius;
    cin >> radius;
    const double PI = 3.14159;
    double area = PI * pow(radius, 2);
    cout << "The area of a circle with radius " << radius << " is: " << area << endl;
}