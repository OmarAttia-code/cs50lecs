#include <iostream>

using namespace std;

int main() {
    char c;
    cout << "Do you agree? ";
    cin >> c;

    if (c == 'Y' || c == 'y') { // use or instead to abide by DRY principle
        cout << "Agreed.\n";
    } else {
        cout << "Not agreed.\n";
    }
    return 0;
}