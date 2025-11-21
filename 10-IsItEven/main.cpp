#include <iostream>
using namespace std;

// This program checks if a number is even or odd.
int main() {
    int number; // Variable for user's number
    cout << "Enter a number: ";
    cin >> number;

    // Check if number is even or odd
    if (number % 2 == 0) {
        cout << number << " is even." << endl;
    } else {
        cout << number << " is odd." << endl;
    }
    return 0;
}