#include<iostream>
using namespace std;
int main(){
	int n,c=-1,i,ans;
	cout<<"Enter number to check whether its perfect cube or not:";
	cin>>n;
	for(i=1;i<n/2;i++){
		if(i*i*i==n){
			c=1;
			ans=i;
			break;
		}
		else{
			c=-1;
		}
	}
	if(c==-1){
		cout<<"Number is not a perfect cube";
		
	}else{
		cout<<"Number is a perfect Cube:"<<ans;
	}
}
