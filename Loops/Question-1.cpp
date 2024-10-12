// write a code to print table for any given number 

#include<iostream>
using namespace std;
int main(){
    int number ;
    cout<<"enter the number : ";
    cin>>number;
    for (int i = 1; i < 11; i++)
    {
        cout<< number <<" x "<< i <<" = "<<number*i<<endl;
    }
    
}