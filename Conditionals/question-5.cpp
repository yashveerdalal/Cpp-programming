//  diving into hierarchy

#include<iostream>
using namespace std;
int main(){
    int x = 3, y , z;
    y = x = 10 ; // for "=" right to left 
    z = x < 0 ;
    cout<<x<<" "<<y<<" "<<z;

}