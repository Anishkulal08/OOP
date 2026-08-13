#include<iostream>
using namespace std;
int main(){
	int u,l,i,j,prime=0,n;
	cout<<"Enter lower limit and upper limit for prime number:";
	cin>>l>>u;
	cout<<"Prime numbers are:";
	for(i=l;i<=u;i++){
		prime=1;
		for(j=2;j<=i/2;j++){
			if(i%j==0){
				prime=0;
				break;
				
			}
			
		}
		if(prime==1){
			cout<<i<<"\t";
		}
	}
}
