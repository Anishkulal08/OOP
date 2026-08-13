#include<iostream>
using namespace std;
int main(){
	int a[]={500,200,100,50,20,10,5,2,1};
	int u,p,av,pay,i=0;
	cout<<"Enter Total bill amount:";
	cin>>u;
	cout<<"Enter cash paid:";
	cin>>p;
	av=p-u;
	while(av>0){
		
		if(a[i]<=av){
			cout<<a[i]<<",";
			av=av-a[i];
		}
		else{
			i++;
		}
	}
}

