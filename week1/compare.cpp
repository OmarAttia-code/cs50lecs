#include <iostream>
#include <limits>
using namespace std;

int main() {
    int x, y;

    cout << "What's x? ";
    while (!(cin >> x)) {
        cout << "enter a valid integer for x: ";
        cin.clear(); 
        cin.ignore(numeric_limits<streamsize>::max(), '\n'); // discard bad input
    }

    cout << "What's y? ";
    while (!(cin >> y)) {
        cout << "enter a valid integer for y: ";
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }

    if (x < y) {
        cout << "x is less than y\n";
    } else if (x > y) {
        cout << "x is greater than y\n";
    } else {
        cout << "x is equal to y\n";
    }

    return 0;
}