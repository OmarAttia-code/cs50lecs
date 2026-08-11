#include <iostream>
#include <limits>

using namespace std;

int main() {
    int x, y;

    cout << "What's x? ";
    while (!(cin >> x)) {
        cout << "Invalid input. Please enter an integer for x: ";
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }

    cout << "What's y? ";
    while (!(cin >> y)) {
        cout << "Invalid input. Please enter an integer for y: ";
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }

    if (y == 0) {
        cout << "Error: Cannot divide by zero.\n";
    } else {
        cout << static_cast<float>(x) / y << "\n";
    }

    return 0;
}