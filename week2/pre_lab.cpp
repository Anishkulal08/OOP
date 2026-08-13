#include<iostream>
using namespace std;
int main(){
	int i,j;

//	for (i = 1; i <=10;  i++); yes		yes	yes			No
//      cout<<i<<endl; 
//for (j = 11; j < 11;   ++j); yes		yes	yes			No
//     cout<<j<<endl;

//int j=100; 
//for (int j = 1; j <=10;  j++); yes		yes	yes			No
//    cout<<j<<endl;

//for (j = 1; j <= 10; j++) 	
//    cout<<”Hello\n”; 
//for (j = 1; j <= 10; j++) 
//{ 
//     if( j < 5) continue; NO		No	No			No	
//    	cout<<j<<”\n”; 
//} 

 for (j = 1, j <= 10, j++) 
      cout<<“Hello\n”;

}
