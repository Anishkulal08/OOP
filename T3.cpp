#include<iostream>
using namespace std;
int main(){
	float pi=3.14;
	float r,b,h;
	float carea,tarea;
	cout<<"Enter the height and breadth to calculate the area of Triangle";
	cin>>h>>b;
	cout<<"\nEnter the radius to calculat the area of circle";
	cin>>r;
	
	carea=pi*r*r;
	tarea=0.5*b*h;
	cout<<"\nArea of Triangle"<<tarea;
	cout<<"\nArea of Circle"<<carea;
	
}
