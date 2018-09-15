//Include the library
#include<iostream>
using namespace std;
/*Write a function toupper() that returns the uppercase of the inputchar received.*/
void toUpper(char a){
//Ask for character
cout<< "Write a character in lowercase: "; 
cin>> a;
a = a-32;
cout<< "The character in uppercase is: "<< a <<endl;
}
void toLower(char a){
//Ask for character
   cout<< "Write a character in uppercase: "; 
   cin>> a;
   a = a+32;
   cout<< "The character in lowercase is: "<< a <<endl;
} 
//Main function
int main(){
int a;
toLower(a);
toUpper(a);
//Print the sum
return 0;
} 	
