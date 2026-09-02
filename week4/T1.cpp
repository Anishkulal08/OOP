#include<iostream>
using namespace std;

class flight{
	int flight_no;
	string dest;
	float distance;
	float fuel;
	
	void calculate_fuel(){
		if(distance<=1000){
			fuel=500;
		}else if(distance>1000 && distance<=2000){
			fuel=1100;
		}else{
			fuel=2200;
		}
	}
	public:
		flight(){
			distance=500;
		}
		void information_entry(){
			cout<<"Enter Flight Number:";
			cin>>flight_no;
			cout<<"Enter destination:";
			cin>>dest;
			cout<<"Enter distance:";
			cin>>distance;
			calculate_fuel();
		}
		void display_info(){
			cout<<"\n\n-------Flight Details-------\n";
			cout<<"Flight Number :"<<flight_no;
			cout<<"\nDestination :"<<dest;
			cout<<"\nDistance :"<<distance<<"Km";
			cout<<"\nFuel :"<<fuel<<"Ltr";
		}
};
int main(){
	flight f;
	f.information_entry();
	f.display_info();
	
}
