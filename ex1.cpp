#include<iostream>

int main(){
	int a=10,b=5;
	std::cout<<"Before exchanging";
	std::cout<<"\nA value is:"<<a<<"\nB value is:"<<b;
	a=b+a;
	b=a-b;
	a=a-b;
	std::cout<<"\nAfter exchanging";
	std::cout<<"\nA value is:"<<a<<"\nB value is:"<<b;
	return 0;
}
