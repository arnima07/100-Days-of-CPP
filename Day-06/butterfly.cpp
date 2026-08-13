// butterfly pattern

#include <iostream>
using namespace std;

int main() {
   
    int n;
    cout << "Enter the number of rows: ";
    cin >> n;

    // Upper half of the butterfly
    for (int i = 1; i <= n; i++) {
        // printing stars
        for (int j = 1; j <= i; j++) {
            cout << "*";
        }

        // printing spaces
        for (int j = 1; j <= 2 * (n - i); j++) {
            cout << " ";
        }

        // printing stars
        for (int j = 1; j <= i; j++) {
            cout << "*";
        }

        cout << endl;
    }

    // Lower half of the butterfly
    for (int i = n - 1; i >= 1; i--) {
        // printing stars
        for (int j = 1; j <= i; j++) {
            cout << "*";
        }

        // printing spaces
        for (int j = 1; j <= 2 * (n - i); j++) {
            cout << " ";
        }

        // printing stars
        for (int j = 1; j <= i; j++) {
            cout << "*";
        }

        cout << endl;
    }

    return 0;
}