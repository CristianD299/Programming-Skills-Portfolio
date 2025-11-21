#include <iostream>
using namespace std;

// This program counts from a start number to an end number.
int main() {
    int start, end; // Variables for range
    cout << "Enter start number: ";
    cin >> start;
    cout << "Enter end number: ";
    cin >> end;

    // Loop from start to end
    for (int i = start; i <= end; i++) {
        cout << i << " ";
    }
    cout << endl;
    return 0;
}