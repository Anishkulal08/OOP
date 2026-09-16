//Write a C++ program to overload the relational operators <= to compare 2 objects 
//of my_String class.  
//Note: use character array to store the strings.

#include<iostream>
#include<cstring>
using namespace std;
class my_string{
	char str1[10];
	public :
		my_string () {
		
			
		}
		void input () {
			cout<<"Enter string : ";
			cin>>str1;
		}
	
		bool operator<=(my_string);
};
bool my_string::operator<=(my_string stri){
	return (strcmp(str1,stri.str1)<=0);
}
int main(){
	my_string str1,str2;
	str1.input();
	str2.input();
	
	if(str1<=str2){
		cout<<"String 1 is less than or equal to  the string 2 ";
	}else{
		cout<<"String 1 is greater than the string 2.";
	}
}
