// day_1_question_3

#include <iostream>
using namespace std;

int main() {
    cout << "This program calculates the average of three numbers." << endl;
    double a, b, c;
    cout << "Enter three numbers: ";
    cin >> a >> b >> c;
    double average = (a + b + c) / 3;
    cout << "The average of " << a << ", " << b << ", and " << c << " is: " << average << endl;
    return 0;
}