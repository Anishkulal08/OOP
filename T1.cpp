#include<iostream>

int main(){
	int a,b;
	std::cout<<"Enter value for A and B\n";
	std::cin>>a>>b;
	std::cout<<"Before exchanging";
	std::cout<<"\nA value is:"<<a<<"\nB value is:"<<b;
	a=b+a;
	b=a-b;
	a=a-b;
	std::cout<<"\nAfter exchanging";
	std::cout<<"\nA value is:"<<a<<"\nB value is:"<<b;
	return 0;
}
 