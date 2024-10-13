#include <iostream>
using namespace std;

int main() {
    int x;
    cout << "Enter the number: ";
    cin >> x;

    for (int i = x; i > 0; i--) {
        for (int j = i; j !=0; j--) {
            cout << " $";
        }
        cout << "\n";
    }

    return 0;
}
