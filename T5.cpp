#include<iostream>
using namespace std;
int main(){
	float mm,cm,c,i,inch,feet;
	cout<<"Enter the distance in mm:";
	cin>>mm;
	
		cm=mm/10;
		c=cm;
		inch=c/2.5;
		i=inch;
		feet=i/12;
	
	
	cout<<"Distance in\nCentimeter :"<<cm<<"\nInches :"<<inch<<"\nFeet :"<<feet;
}
