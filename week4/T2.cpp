#include<iostream>
using namespace std;
class bank_acc{
	string name;
	int acc_no;
	string acc_type;
	float balance;
	public:
		bank_acc(){
			balance=500;
		}
		void info(){
			cout<<"Enter Customer Name:";
			cin>>name;
			cout<<"Enter Account Number :";
			cin>>acc_no;
			cout<<"Enter Account Type :";
			cin>>acc_type;
			
		}
		void deposit(){
			int amt;
			cout<<"Enter amount to deposit :";
			cin>>amt;
			balance=balance+amt;
		}
		void withdraw(){
			int amt;
			cout<<"\nYour current balance is:"<<balance;
			cout<<"\nEnter amount to withdraw:";
			cin>>amt;
			if(balance>=amt){
				balance=balance-amt;
				cout<<"\nAmount Withdrawn successfully .";
				
			}else{
				cout<<"\nInsufficient balance .";
			}
		}
		void display(){
			cout<<"\n-----Account Details-----\n";
			cout<<"\nCustomer Name :"<<name;
			cout<<"\nAccount Number :"<<acc_no;
			cout<<"\nAccount Type :"<<acc_type;
			cout<<"\nAvailable Balance :"<<balance;
		}
};
int main(){
	bank_acc b1,b2;
	b1.info();
	b1.deposit();
	b1.withdraw();
	b1.display();
	b2.info();
	b2.deposit();
	b2.withdraw();
	b2.display();
}
