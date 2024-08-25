#include<iostream>
using namespace std;
int main()
{
  // check if a number is div by both 3 and 5 
  int number ;
  cout<<"enter the number : ";
  cin>>number;
  if ((number % 3 == 0) && (number % 5 ==0))
  {
    cout<< "condition satisfied";
  }   
}