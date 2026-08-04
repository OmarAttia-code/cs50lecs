#include <iostream>

using namespace std;

int main() {
    int x, y;
    cout << "What's x? ";
    cin >> x;
    cout << "What's y? ";
    cin >> y;
    if (y == 0) {
        cout << "Error: Cannot divide by zero.\n";
    } else {
       
        cout << static_cast<float>(x) / y << "\n";
    }

   
    return 0;
}