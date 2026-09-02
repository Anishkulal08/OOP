#include<iostream>
using namespace std;

class Complex
{
    int real, imag;

public:
    Complex()
    {
        real = 0;
        imag = 0;
    }

    Complex(int r, int i)
    {
        real = r;
        imag = i;
    }

    Complex add(int s1, Complex s2)
    {
        Complex temp;
        temp.real = s1 + s2.real;
        temp.imag = s2.imag;
        return temp;
    }

    Complex add(Complex s1, Complex s2)
    {
        Complex temp;
        temp.real = s1.real + s2.real;
        temp.imag = s1.imag + s2.imag;
        return temp;
    }

    void display()
    {
        cout << real << " + " << imag << "i" << endl;
    }
};

int main()
{
    int n, r1, i1, r2, i2;
    Complex c1, c2, result;

    cout << "Enter integer: ";
    cin >> n;

    cout << "Enter real and imaginary part of first complex number: ";
    cin >> r1 >> i1;

    cout << "Enter real and imaginary part of second complex number: ";
    cin >> r2 >> i2;

    c1 = Complex(r1, i1);
    c2 = Complex(r2, i2);

    result = result.add(n, c1);
    cout << "Integer + Complex = ";
    result.display();

    result = result.add(c1, c2);
    cout << "Complex + Complex = ";
    result.display();

    return 0;
}