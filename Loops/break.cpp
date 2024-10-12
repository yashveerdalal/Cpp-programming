#include<iostream>
using namespace std;
int main(){
    int number ;
    cout<<"enter the number : ";
    cin>>number;
    for (int i =  (number/2); i >= 1; i--)
    {
        if (number % i == 0)
        {
            cout<<i<<endl;
        };
        break;
        
    };
    


}