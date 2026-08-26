#include<iostream>
using namespace std;

inline int cube(int n){
		return n*n*n;
		
	}
int main(){
	int n,ans;
	cout<<"Enter number to find the cube:";
	cin>>n;
	ans=cube(n);
	cout<<"Cube is:"<<ans;
	
}
