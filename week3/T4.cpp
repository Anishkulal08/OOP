//Write a C++ program that computes the inverse of an integer and the double of the 
//inverse. Example: Inverse (1367) = 7631 and double (7631) = 15262. Use functions 
//for calculating inverse and double of inverse.

#include<iostream>
using namespace std;
int inv(int n){
	int rev=0,digit;
	while(n>0){
		digit=n%10;
		rev=rev*10+digit;
		n=n/10;
	}
	return rev;
}
int invdob(int d){
	return d*2;
}
int main(){
	int n,d,ansrev,ansdob;
	cout<<"Enter number to check for reverse:";
	cin>>n;
	ansrev=inv(n);
	ansdob=invdob(ansrev);
	cout<<"\nInverse of the number:"<<ansrev;
	cout<<"\nDouble of the inverse:"<<ansdob;
	
	
}
