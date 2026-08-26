//Write an interactive program in C++ for swapping two integers, floats, and 
//characters using function-overloading concept. Display the results in the main() 
//function.
#include<iostream>
using namespace std;
int swap(int &a,int &b){
	int temp;
	temp=a;
	a=b;
	b=temp;
}
float swap(float &c,float &d){
	float temp;
	temp=c;
	c=d;
	d=temp;
}
char swap(char &e,char &f){
	char temp;
	temp=e;
	e=f;
	f=temp;
}
int main(){
	int a,b;
	float c,d;
	char e,f;
	cout<<"Enter integer numbers: ";
	cin>>a>>b;
	cout<<"Enter floating point numbers:";
	cin>>c>>d;
	cout<<"Enter charcter numbers:";
	cin>>e>>f;
	cout<<"\nInteger before swapping a:"<<a<<" b:"<<b;
	cout<<"\nFloats before swapping a:"<<c<<" b:"<<d;
	cout<<"\nCharacter beforef swapping a:"<<e<<" b:"<<f;
	swap(a,b);
	swap(c,d);
	swap(e,f);
	cout<<"\n\n\nInteger after swapping a:"<<a<<" b:"<<b;
	cout<<"\nFloats after swapping a:"<<c<<" b:"<<d;
	cout<<"\nCharacter after swapping a:"<<e<<" b:"<<f;
}
