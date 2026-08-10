// armstrong number

#include <iostream>
using namespace std;

int main()
{
    int n, org, rem, result = 0;
    cout<< "Enter a number: ";
    cin>>n;
    
    org = n;
    
    while (org != 0)
    {
        rem = org % 10;
        result += rem * rem * rem;
        org /= 10;
    }
    
    if(result == n)
        cout<< n << " is an Armstrong number." << endl;
    else
        cout<< n << " is not an Armstrong number." << endl;
    
    return 0;
}