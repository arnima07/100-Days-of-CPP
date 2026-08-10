// sum of digits of a number

#include <iostream>
using namespace std;

int main()
{
    int n, rem, sum = 0;
    cout<< "Enter a number: ";
    cin>>n;
    
    while (n != 0)
    {
        rem = n % 10;
        sum += rem;
        n /= 10;
    }
    
    cout<< "Sum of digits: " << sum << endl;
    
    return 0;
}