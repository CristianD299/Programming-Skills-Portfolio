#include <iostream>
#include <string>
using namespace std;

// This program collects user's name, age, and hobby, then displays a short biography.
int main() {
    string name, hobby; // Variables for name and hobby
    int age; // Variable for age

    // Prompt user for details
    cout << "Enter your name: ";
    getline(cin, name);
    cout << "Enter your age: ";
    cin >> age;
    cin.ignore(); // Clear input buffer
    cout << "Enter your hobby: ";
    getline(cin, hobby);

    // Display the biography
    cout << "
Biography:
";
    cout << "Name: " << name << "
Age: " << age << "
Hobby: " << hobby << endl;
    return 0;
}