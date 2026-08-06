#include<iostream>
using namespace std;
int main(){
	int h=0,m=0,ins;
	cout<<"Enter time in Seconds";
	cin>>ins;
	while(ins>=60){
	
	if(ins>=60){
		m++;
		ins=ins-60;
		if(m>=60){
			h++;
			m=m-60;
		}
	}
}
	cout<<"Time is "<<h<<":"<<m<<":"<<ins;
}
