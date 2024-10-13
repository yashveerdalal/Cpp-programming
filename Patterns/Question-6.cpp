#include<iostream>
using namespace std;
int main(){
    int number ;
    cout<<"Enter the number : ";
    cin>>number;
    int x = 1;
    for (int i = 0; i <number ; i++)
    {
       for (int j = 0; j < i ; j++)
       {
        cout<<x;
        x++;
       }
       cout<<"\n";
    }
    
}