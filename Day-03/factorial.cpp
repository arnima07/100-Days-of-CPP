// print factorial of a number

#include <iostream>
using namespace std;

int main() 

{
    int N;
    unsigned long long factorial = 1; // Use unsigned long long to handle large factorials

    cout << "Enter a number: ";
    cin >> N;

    if (N < 0) {
        cout << "Factorial is not defined for negative numbers." << endl;
    } else {
        for (int i = 1; i <= N; i++) {
            factorial *= i;
        }
        cout << "Factorial of " << N << " is: " << factorial << endl;
    }

    return 0;
}