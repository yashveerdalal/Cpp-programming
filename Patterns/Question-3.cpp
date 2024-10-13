#include<iostream>
using namespace std;
int main(){
int a;
int b;
cout<<"Enter The 1st Number : ";
cin>>a;
cout<<"Enter The 1st Number : ";
cin>>b;
for (int i = 0; i < a; i++)
{
    for (int j = 65; j <= 65 + b; j++)
    {
     cout<<char(j)<<" ";  
    }
    cout<<endl;
    
}

}