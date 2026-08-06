#include<iostream>
using namespace std;

int main()
{
    float c,f;
    cout<<"Enter Temperature in Fahrenheit:";
    cin>>f;
    c=(5.0/9)*(f-32);
    cout<<"Temperature in Celsius:"<<c;
    cout<<"\n\nEnter Temperature in Celsius:";
    cin>>c;
    f=(9.0/5)*c+32;
    cout<<"Temperature in Fahrenheit:"<<f;
	return 0;
}