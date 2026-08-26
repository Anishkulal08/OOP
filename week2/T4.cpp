#include<iostream>
using namespace std;
int main(){
	int a=0,b=1,c=0,n,i;
	cout<<"Enter the range for fibonacci number:";
	cin>>n;
	cout<<"Fibonacci Numbers are:";
	while(i<n){
		cout<<c<<"\t";
		a=b;
		b=c;
		c=a+b;
		i++;
		
	}
}
