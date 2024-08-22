#include<iostream>
using namespace std;
int main(){
int x = 5 , y = 10;
cout<<x*y<<endl;
cout<<x+y<<endl;
cout<<y-x<<endl;
cout<<12/y<<endl;

cout<<x++<<endl; // first, apply the changes and then use it(post)
cout<<x<<endl;
cout<<++x<<endl; // first, use it, then apply the changes(pre)
cout<<12%5<<endl; // % is the modulus operator that returns the final value as the Reminder when the number is divided by another number 

// if a < b thn a % b will result as  a  
// a%(-b) = a%b
////////   (-a)%b = -(a%b)

cout<<(-5)%2<<endl;
cout<<(5)%(-2);
};

// Increment (++):
// Prefix (++x): Increases the value of x by 1 and then uses the new value.
// Postfix (x++): Uses the current value of x and then increases it by 1.
// Decrement (--):
// Prefix (--x): Decreases the value of x by 1 and then uses the new value.
// Postfix (x--): Uses the current value of x and then decreases it by 1.