#include<iostream>
using namespace std;

int main() {
    int number;
    cout << "Enter the Number: ";
    cin >> number;

    if (number < 2) {
        cout << "Neither prime nor composite." << endl;
        return 0;
    }

    bool flag = true; 

    for (int i = 2; i <= number / 2; i++) {
        if (number % i == 0) {
            flag = false; 
            break; 
        }
    }

    (flag) ? cout << "Prime Number" : cout << "Composite Number";
    cout << endl;

    return 0;
}
