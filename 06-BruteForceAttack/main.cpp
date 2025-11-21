#include <iostream>
#include <string>
using namespace std;

// This program simulates a brute force attack by repeatedly asking for a password until correct.
int main() {
    string password = "1234"; // The correct password
    string guess; // Variable for user's guess
    int attempts = 0; // Counter for attempts

    cout << "Brute Force Attack Simulation
";
    do {
        cout << "Enter password guess: ";
        cin >> guess;
        attempts++; // Increment attempts
    } while (guess != password);

    // Display number of attempts taken
    cout << "Password cracked in " << attempts << " attempts!" << endl;
    return 0;
}