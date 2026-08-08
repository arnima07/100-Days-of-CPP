// swap to numbers

#include <iostream>
using namespace std;

int main() {
    int n1, n2, temp;

    cout << "Enter two numbers: ";
    cin >> n1 >> n2;

    cout << "Before swapping: n1 = " << n1 << ", n2 = " << n2 << endl;

    // swapping logic
    temp = n1;
    n1 = n2;
    n2 = temp;
    
    cout << "After swapping: n1 = " << n1 << ", n2 = " << n2 << endl;

    return 0;
}