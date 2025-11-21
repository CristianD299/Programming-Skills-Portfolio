#include <iostream>
#include <string>
using namespace std;

// This program greets the user by name.
int main() {
    string name; // Variable for user's name
    cout << "Enter your name: ";
    getline(cin, name);
    cout << "Hello, " << name << "!" << endl;
    return 0;
}