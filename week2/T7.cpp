#include<iostream>
using namespace std;

	struct Account{
		string name;
		int accno;
		string type;
		float balance;
	};
	
int main(){
	Account a;
	float amount;
	cout<<"Enter Customer Name:";
	cin>>a.name;
	cout<<"Enter Customer Accno:";
	cin>>a.accno;
	cout<<"Enter Account Type(Savings,Current,Fixed):";
	cin>>a.type;
	cout<<"Enter Initial balance:";
	cin>>a.balance;
	
	cout<<"\n"<<"Enter amount to deposit";
	cin>>amount;
	a.balance=amount+a.balance;
	cout<<"Total Balance now:"<<a.balance;
	
	cout<<"\nEnter Amounnt to withdraw:";
	cin>>amount;
	if(amount<=a.balance){
		a.balance=a.balance-amount;
		cout<<"Withdrawal successfully";
	}else{
		cout<<"Insufficient balance"<<endl;
	}
	return 0;
}