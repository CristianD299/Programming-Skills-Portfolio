#include <iostream>
#include <string>
using namespace std;

// This program simulates a brute force attack by repeatedly asking for a password until correct.
int main() {
    string password = "password"; // The correct password
    string guess; // Variable for user's guess
    int attempts = 0; // Counter for attempts

    cout << "Brute Force Attack Simulation" << endl;
    do {
        cout << "Enter password: ";
        cin >> guess;
        attempts++; // Increment attempts
    } while (guess != password);

    // Display number of attempts 
    cout << "Password cracked in " << attempts << " attempts!" << endl;
    return 0;
}
