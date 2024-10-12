// Use a while loop when you want to repeat actions until a specific condition is no longer true, especially when the number of repetitions isn’t known in advance.


// n to 1 
#include<iostream>
using namespace  std;
int main(){
    int number;
    cout<<"enter the number : ";
    cin>>number;
    while ( number != 0)
    {
       cout<<number<<endl;
       number--;
    };
    
}
