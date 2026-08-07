// day_1_question_4

#include <iostream>
using namespace std;        

int main() {
    
    cout << "This program calculates the area of a rectangle." << endl;
    
    double len, wid;
    cout << "Enter the length of the rectangle: ";
    cin >> len;
    cout << "Enter the width of the rectangle: ";
    cin >> wid;
    double area = len * wid;
    cout << "The area of the rectangle with length " << len << " and width " << wid << " is: " << area << endl;
    return 0;
}