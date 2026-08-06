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
	
	
	cout<<"Distance in\nCentimeter\n"<<cm<<"\nInches:"<<inch<<"\nFeet:"<<feet;
}
//#include<iostream>
//using namespace std;
//int main(){
//	float mm,cm,i,c,inch,feet;
//	cout<<"Enter the distance in mm:";
//	cin>>mm;
//
//		cm=mm/10;
//		mm=mm/10;
//		if(cm>2.5){
//			inch=cm/2.5;
//			cm=cm%2.5;
//			if(inch>=12){
//				feet=cm/12;
//				inch=inch/12;
//			}
//		}
//	
//	cout<<"Distance in\nCentimeter\n"<<cm<<"\nInches:"<<inch<<"\nFeet:"<<feet;
//}
