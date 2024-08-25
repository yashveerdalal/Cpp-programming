// if cp and sp of a item is input through the keyboard write a program to determine whether the seller has made profit or incurred loss or no profit or no loss . also determine how much profit he made or loss he incurred 


#include<iostream>
using namespace std;
int main()
{
 int cp ;
 int sp ;
 cout<<("enter the cp of the item : ");
 cin>>cp;
 cout<<("enter the sp of the item : ");
 cin>>sp;
 if (cp > sp)
 {
    cout<<("there's a loss  of ")<<cp - sp << (" dollars\n");

 }
 else if (sp > cp )
 {
    cout<<("there's a profit  of ")<<sp - cp << ("dollars \n");
 }
else
{
     cout<<("no profit no loss");
};

};