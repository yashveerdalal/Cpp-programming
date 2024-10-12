//WAP to find the highest factor of a number n other than the number itself 

#include<iostream>
using namespace std;
int main(){
    int number ;
    cout<<"enter the number : ";
    cin>>number;
    int highestFactor = 1;
    for (int i = 2; i < number/2; i++)
    {
        
        if((number % i == 0 )&& (i > highestFactor) ){
           highestFactor = i ;
        }
    }
    cout<<"so the final answer is "<<highestFactor;
    
}
