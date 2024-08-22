// take integer 'x' as input and print the half of the number 

// Typecasting refers to the process of converting a value from one data type to another. It ensures that values are correctly interpreted and manipulated according to their intended data types.

// # Types of Typecasting

// 1. Implicit Typecasting (Automatic Typecasting):
//    - This is performed automatically by the compiler or interpreter when you assign a value of one type to a variable of another type.

// 2. Explicit Typecasting (Manual Typecasting):
//    - This requires the programmer to manually specify the type conversion using casting operators or functions.

// # Purpose of Typecasting

// - Correct Data Representation: Ensures that data is represented in the appropriate format for operations or functions.
// - Prevent Errors: Helps avoid errors related to type mismatches by converting data to the required type.
// - Compatibility: Facilitates interoperability between different data types and operations.

// Typecasting is a fundamental concept in programming that allows for the conversion between different data types to ensure proper operations and compatibility.

#include<iostream>
using namespace std;
int main(){
int  x ;
cout<<"Enter the number:";
cin>>x;

cout<<" Desired output is :"<<float(x)/2;
};