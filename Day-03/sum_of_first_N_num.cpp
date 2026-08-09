// print sum of first N numbers

#include <iostream>
using namespace std;

int main() 

{
    int N, sum = 0;
    cout << "Enter a number: ";
    cin >> N;

    for (int i = 1; i <= N; i++) {
        sum += i;
    }

    cout << "Sum of first " << N << " numbers is: " << sum << endl;
    return 0;
}