// checking if a Triangle is possible with the given sides 

#include<iostream>
using namespace std;
int main(){
    int a , b , c ;
    cout<<"enter the first side of Triangle";
    cin>>a;
     cout<<"enter the 2nd side of Triangle";
    cin>>b;
     cout<<"enter the 3rd side of Triangle";
    cin>>c;
    if ( (((a + b) > c) and ((b + c )> a) )and ((a + c )> b) )// but its always better to use ( ) just in case to mark the  Priorities
    {
        cout<<("triangle is possible ");

    }
    else{
        cout<<("triangle is not possible");
    }
    

}