#include<iostream>
using namespace std;
int main(){
	
	int n,i,j,l=0,k=0,m=0,p=0,o=1,s=0,r=0,t=1;
	cout<<"Enter the number of lines:";
	cin>>n;
	cout<<"\n";
	for(i=0;i<n;i++){
		for(j=0;j<n-i;j++){
			cout<<"*\t";
			}
		cout<<"\n";
	}
	cout<<"\n";
	char ch[]={'A','B','C','D','E'};
	for(i=0;i<n;i++){
		for(j=0;j<n-i;j++){
			cout<<ch[j]<<"\t";
			}
		cout<<"\n";
	}
	cout<<"\n";
	for(i=0;i<n-1;i++){
		for(j=0;j<=i;j++){
			cout<<o<<"\t";
			o++;
			}
		cout<<"\n";
	}
	cout<<"\n";
	cout<<"Using While loop\n";
	while(k<n){
		l=0;
		while(l<n-k){
			cout<<"*"<<"\t";
			l++;
		}
		cout<<"\n";
		k++;
	}
	cout<<"\n";
	while(m<n){
		p=0;
		while(p<n-m){
			cout<<ch[p]<<"\t";
			p++;
		}
		cout<<"\n";
		m++;
	}
	cout<<"\n";
	while(r<n){
		s=0;
		while(s<r){
			cout<<t<<"\t";
			t++;
			s++;
		}
		cout<<"\n";
		r++;
	}
	
}
