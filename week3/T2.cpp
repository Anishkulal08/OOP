#include<iostream>
#include<cstring>
using namespace std;
bool comp(char ch[]){
	int len=strlen(ch);
	for(int i=0;i<len;i++){
		if(ch[i]!=ch[len-1-i]){
			return false;
		}
		
	}
	return true;
}
int main(){
	char ch[10];
	cout<<"Enter the String to check:";
	cin>>ch;
	if(comp(ch)){
		cout<<"String is a palindrome";
	}else{
		cout<<"String is not a palindrome";
	}
	
}
