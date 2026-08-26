//Given that an EMPLOYEE structure contains following members. Data members: 
//Employee_Number, Employee_Name, Basic, DA, IT, Net_Sal. Write functions: To 
//read the data, calculate net salary and display the net salary. Write a C++ program 
//to read the data of N employees and compute Net salary of each employee. (DA= 
//12% of Basic and Income Tax (IT) = 18% of the gross salary). 

#include<iostream>
using namespace std;
struct Employee{
	int Emp_no;
	string Emp_name;
	float basic=0,da=0,it=0,net_sal=0;
};
void getdata(Employee &e){
	cout<<"\nEnter Employee number:";
	cin>>e.Emp_no;
	cout<<"Enter Employee Name:";
	cin>>e.Emp_name;
	cout<<"Enter Employee salary:";
	cin>>e.basic;
	
}
void calculate(Employee &e){
	e.da=0.12*e.basic;
	int gross=e.da+e.basic;
	e.it=0.18*gross;
	e.net_sal=gross-e.it;	
}
void display(Employee &e){
	cout<<"\nEmpoyee Name:"<<e.Emp_name;
	cout<<"\nEmployee number:"<<e.Emp_no;
	cout<<"\nBasic salary:"<<e.basic;
	cout<<"\nDA:"<<e.da;
	cout<<"\nIncome Tax:"<<e.it;
	cout<<"\nNet Salary:"<<e.net_sal<<"\n";
}
int main(){
	int n,i;
	Employee e[100]	;
	cout<<"\nEnter number of employees:";
	cin>>n;
	for(i=0;i<n;i++){
		cout<<"\nEmployee "<<i+1;
		getdata(e[i]);
		calculate(e[i]);
	}
	cout<<"All Employee Details:\n\n                           ";
	for(i=0;i<n;i++){
		display(e[i]);
	}
}


