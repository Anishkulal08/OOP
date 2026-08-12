#include <iostream>
using namespace std;

int main() {
    int a, b, c, smallest;

    cout << "Enter three numbers: ";
    cin >> a >> b >> c;

    if (a <= b && a <= c)
        smallest = a;
    else if (b <= a && b <= c)
        smallest = b;
    else
        smallest = c;

    cout << "Smallest number = " << smallest << endl;

    return 0;
}