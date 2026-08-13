#include<iostream>
using namespace std;
int main(){
	int a=0,b=1,c=0,n;
	cout<<"Enter the range for fibonacci number:";
	cin>>n;
	cout<<"Fibonacci Numbers are:";
	while(c<n){
		cout<<c<<"\t";
		a=b;
		b=c;
		c=a+b;
		
	}
}
