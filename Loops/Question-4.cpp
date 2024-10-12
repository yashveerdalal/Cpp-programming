//write a code to count the digits of a given number 
#include<iostream>
using namespace std;
int main(){
    int number;
    cout<<"enter the number : ";
    cin>>number;
    int answer = 0 ;
    while (number != 0)
    {
       number = number/10; 
       answer++;
    };
    
cout<<"the number of digits are : "<<answer;

}