//Write a C++ program to perform addition and subtraction on two complex numbers 
//using operator overloading using member functions. 

#include<iostream>
using namespace std;

class complex{
	int real,img;
	public:
		complex(){
			img=0;
			real=0;
		}
		complex(int r,int i){
			real=r;
			img=i;
		}
		void input(){
			cout<<"Enter Real number and imaginary number :";
			cin>>real>>img;
		}
		
		complex operator +(complex &c1) {
			return complex(real+c1.real,img+c1.img);
		}
		complex operator -(complex c1){
			complex temp;
			temp.real=real-c1.real;
			temp.img=img-c1.img;
			return temp;
		}
		void display(){
			if(img>=0){
				cout<<"Complex number is :"<<real<<" + "<<img<<"i ";
			}else{
				cout<<"Complex number is :"<<real<<" "<<img<<"i ";
			}
			
		}
};
int main(){
	complex c1,c2,c3,c4;
	cout<<"Enter First complex number "<<endl;
	c1.input();
	cout<<"Enter second complex number "<<endl;
	c2.input();
	c3=c1+c2;
	c4=c1-c2;
	cout<<endl;
	cout<<"Complex number Addition ";
	c3.display();
	cout<<endl;
	cout<<"Complex number subtraction ";
	c4.display();
}
