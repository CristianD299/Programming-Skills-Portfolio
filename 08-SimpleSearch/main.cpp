#include <iostream>
using namespace std;

// This program searches for a number in a predefined array.
int main() {
    int arr[] = {3, 7, 9, 12, 15}; // Array of numbers
    int size = 5; // Size of array
    int target; // Number to search for
    bool found = false; // Flag to indicate if found

    cout << "Enter number to search: ";
    cin >> target;

    // Linear search
    for (int i = 0; i < size; i++) {
        if (arr[i] == target) {
            cout << "Found at position " << i << endl;
            found = true;
            break;
        }
    }

    if (!found) {
        cout << "Not found." << endl;
    }
    return 0;
}