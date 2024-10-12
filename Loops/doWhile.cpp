// Use a **do-while loop** when you want to repeat actions at least once and then continue as long as a specific condition is true. It ensures that the instructions run before checking the condition.

#include<iostream>
using namespace std;
int main(){
    int i = 11;
   do {
        cout<<i<<endl;
        i++;
    }while(i<=10);
}