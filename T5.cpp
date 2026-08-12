#include <iostream>
using namespace std;

int main() {
    float mm, cm, inch, feet;

    cout << "Enter distance in millimeters: ";
    cin >> mm;

    cm = mm / 10;
    inch = cm / 2.5;
    feet = inch / 12;

    cout << "Distance in cm = " << cm << endl;
    cout << "Distance in inch = " << inch << endl;
    cout << "Distance in feet = " << feet << endl;

    return 0;
}