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
        cout<<"Enter Customer Name: ";
        cin>>name;

        cout<<"Enter Account Number: ";
        cin>>acc_no;

        cout<<"Enter Account Type (S/F/C): ";
        cin>>acc_type;
    }

    void deposit(){
        int amt;
        cout<<"Enter amount to deposit: ";
        cin>>amt;
        balance=balance+amt;
    }

    friend void withdraw(bank_acc &b);

    void display(){
        cout<<"\n-----Account Details-----\n";
        cout<<"Customer Name: "<<name;
        cout<<"\nAccount Number: "<<acc_no;
        cout<<"\nAccount Type: "<<acc_type;
        cout<<"\nAvailable Balance: "<<balance;
    }
};

void withdraw(bank_acc &b){
    int amt;
    cout<<"\nYour current balance is: "<<b.balance;
    cout<<"\nEnter amount to withdraw: ";
    cin>>amt;

    if(b.balance>=amt){
        b.balance=b.balance-amt;
        cout<<"\nAmount Withdrawn successfully.";
    }
    else{
        cout<<"\nInsufficient balance.";
    }
}

int main(){
    bank_acc b1,b2;

    b1.info();
    b1.deposit();
    withdraw(b1);
    b1.display();

    b2.info();
    b2.deposit();
    withdraw(b2);
    b2.display();

    return 0;
}