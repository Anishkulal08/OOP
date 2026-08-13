#include<iostream>
#include<string>
#include<cmath>
using namespace std;
int main(){
	int d,n,i=1,p=1,bn=0,b,dig=0,count,f;
	string ans;
	cout<<"Enter the decimal number:";
	cin>>d;
	while(d>0){
		n=d%2;
		bn=bn+(n*p);
		p=p*10;
		d=d/2;
	}
	cout<<"\nBinary number is:"<<bn<<endl;
	cout<<"\nEnter the bit number:";
	cin>>b;

    
	
	
	while(b>0){
		n=b%10;
		dig=dig+(n*i);
		i*=2;
		b=b/10;
	}
	cout<<dig;
}
