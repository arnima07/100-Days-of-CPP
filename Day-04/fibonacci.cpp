// fibonacci series

#include <iostream>
using namespace std;

int main()
{
    int n, a = 0, b = 1, rem;
    cout << "Enter the number of terms: ";
    cin >> n;
    cout << "Fibonacci Series: ";
    for (int i = 1; i <= n; ++i) {
        if(i == 1) {
            cout << a << " ";
            continue;
        }
        if(i == 2) {
            cout << b << " ";
            continue;
        }
        rem = a + b;
        a = b;
        b = rem;
        cout << rem << " ";
    }
    return 0;
}