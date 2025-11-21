#include <iostream>
using namespace std;

// This program is asking the user a math question and checks if the answer is correct.
int main() {
    int answer; // Variable to store the answer
    cout << "What is 10 + 5? ";
    cin >> answer;

    // Check if the answer is correct
    if (answer == 15) {
        cout << "Correct!" << endl;
    } else {
        cout << "Wrong answer." << endl;
    }
    return 0;
}
