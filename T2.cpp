#include<iostream>
using namespace std;
int main(){
	int a,b,c;
	cout<<"Enter value for A:\n";
	cin>>a;
	cout<<"Enter value for B:\n";
	cin>>b;
	cout<<"Enter value for C:\n";
	cin>>c;
	if(a<b&&a<c){
		cout<<"A is the smallest number";
		
	}else if(b<a&&b<c){
		cout<<"B is the smallest element";
		
	}else{
		cout<<"C is the smallest  number";
	}
}
