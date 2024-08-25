// take a pos integer as  input and tell if it is even or odd
#include<iostream>
using namespace std;
int main(){
    int number ;
    cout<<"enter the number : ";
    cin>>number;
    if (number % 2 ==0 )
    {
        cout<<"even number";
    }
    else{
        cout<<"odd number\n";
    }
    
    int nub;
    cout<<"enter the number :";
    cin>>nub;
    if( nub >= 0){
        cout<<nub;
    }
    else{
        cout<<nub*(-1);
    }

}