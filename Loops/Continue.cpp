//print number from 2 to 90 Except 15 and 30 ;
#include <iostream>
using namespace std;

int main() {
    for (int i = 2; i <= 40; i++) {
        if (i == 15 || i == 30) {
            continue;
        }
        cout << i << " ";
    }
    cout << endl;
    return 0;
}
