
/*question number 2a from google classroom*/
//Include the Library
#include<iostream>
using namespace std;
//Functions with parameters and reference parameter
void funcR(int a, int b ,int &c){
//adding them
c=a+b;
}
//Driver function
int main(){
//Declare the variables	
int d,e,sum;
//give two number
cout<< "The two numbers to give the sum: ";
cin>>d>>e;
funcR(d,e,sum);
//Print the sum.
cout<<"The sum of the numbers "<< d << " and " << e <<" is "<<  sum <<endl;
	
return 0;
}
