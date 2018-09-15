/* question number 3a*/
//Include the library
#include<iostream>
using namespace std;
//Write a function that has two parameters.
int func(int a, int b){
if(a>b){
return a;}
else {
return b;}
}
//Driver function
int main(){
//Declare variables
int c,d;
//give user two variable
cout<< "Let the two numbers be ";
cin >>c >>d;
//Tell the bigger number
cout<<"The larger of the two numbers "<<c<< " and " <<d<<" is "<< 
func(c,d) <<endl;
		
return 0;
}
