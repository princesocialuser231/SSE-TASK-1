// There are two types of header files
// 1. System header files: It comes with the compiler
#include <iostream>
// 2. User defined header files: It is written by the programmer
// #include "this.h" this will produce error if this.h is not present in the current
// directory
using namespace std;

int main(){
int a=4, b=5;
cout<<"This is hello world program ";
cout<<"Operators in C++:"<<endl;
cout<<"Following are the types of operators in C++"<<endl;
// Arithmetic operators;
cout<<"The value of a+b is "<<a+b<<endl;
cout<<"The value of a-b is "<<a-b<<endl;
cout<<"The value of a*b is "<<a*b<<endl;
cout<<"The value of a/b is "<<a/b<<endl;
cout<<"The value of a%b is "<<a%b<<endl;  //here % represents modulo and it shows the remainder
cout<<"The value of a++ is "<<a++<<endl; // value prints 4 but in backg  a becomes 5
cout<<"The value of a-- is "<<a--<<endl; // now a print as 5 but in back a becomes 5-1=4
cout<<"The value of ++a is "<<++a<<endl; // here ++a instantly does 4(old a)+1 = 5
cout<<"The value of --a is "<<--a<<endl;  // here --a print 5-1=4
cout<<endl; // to create space


// Assignment operators--> used to assign values to variables
// int a = 3, b =9; 
// char d= 'd';

//  comparison operators --> use to compare variables 
cout<<"Following are the comparison operators in C++"<<endl;
 cout<<"The value of a ==b is "<<(a==b)<<endl; 
 cout<<"The value of a!= b is "<<(a!=b)<<endl; // endl kuchh nhi krta bas new line mein agli chize likh deta h
 cout<<"The value of a >b is "<<(a>b)<<endl; 
 cout<<"The value of a <b is "<<(a<b)<<endl; 
 cout<<"The value of a <=b is "<<(a<=b)<<endl; 
 cout<<"The value of a >=b is "<<(a==b)<<endl; 

 //  Logical operators --> use to compare variables 
cout<<"Following are the Logical operators in C++"<<endl;
 cout<<"The value of this logical and operator ((a==b) && (a<b)) is "<<((a==b) && (a<b))<<endl; 
 cout<<"The value of this logical or operator ((a==b) || (a<b)) is "<<((a==b) || (a<b))<<endl; 
 cout<<"The value of this logical not operator (!(a==b)) is "<<(!(a==b))<<endl; 
 
    return 0;
}
