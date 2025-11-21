#include <iostream>
using namespace std;

// This program asks a simple math question and checks if the answer is correct.
int main() {
    int answer; // Variable to store user's answer
    cout << "What is 5 + 3? ";
    cin >> answer;

    // Check if the answer is correct
    if (answer == 8) {
        cout << "Correct!" << endl;
    } else {
        cout << "Wrong answer." << endl;
    }
    return 0;
}