//float average(x,y); 
#include<iostream>
//void f() 
//void f(){ cout<<"C++"; } 
//int main(){ 
//                  f(); 
//                  return 0; 
//} 

//void f(int, int); 
//void f(int x,y){                     
//            x =1; y=2;} 
//int main(){ 
//                  int x=10; 
//                  f(x,x); 
//                  cout<< x; 
//                  return 0; 
//} 
//int main(){
//	int i; 
//double *dptr; 
//dptr= &i; 
//}

//int main(){
//	int array[] = {10, 20, 30}; 
//        cout << -2[array]; 
//}

void display(int a[][20], int m, int n) 
   { 
                int i,j; 
         for (i=0; i<m; i++) 
            for (j=0; j<n; j++) 
                cout<<""<<a[i][j]; 
                cout<<"\n"; 
                } 
int main(){
	int a[]={{10,20},{30,40},{50,60}},m=3,n=2;
	display(a,m,n);
}
    
