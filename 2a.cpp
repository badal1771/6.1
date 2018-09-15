/*question number 2 a form the google classroom*/
//Include the library
#include<iostream>
using namespace std;
//functions with two parameters
int func(int a, int b){
//adding them
int add = (a + b);
return add;
}
//Driver function
int main(){
int c,d;
//Ask for two number.
cout<< "Give two numbers be ";
cin >>c >>d;
//give user the number.
cout<<"The sum of the numbers"<<c<< " and " <<d<<" is "<< 
func(c,d) <<endl;		
return 0;
}
