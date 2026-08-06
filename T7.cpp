#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;
int main(){
	float r,n,t,p,a=0,s=0,ans=0,ci=0;
	cout<<"Enter Principal amount:";
	cin>>p;
	cout<<"\nEnter  number of times that interest is compounded:";
	cin>>n;
	cout<<"\nEnter interest rate :";
	cin>>r;
	r=r/100;
	cout<<"\nEnter time the money is invested:";
	cin>>t;
	s=n*t;
	ans = p * pow((1 + r / n), n * t);
    ci = ans - p;
	cout<<"Future value :"<<ans<<endl<<"Ci :"<<ci;
}
