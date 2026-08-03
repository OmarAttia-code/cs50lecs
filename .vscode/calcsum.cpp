#include <iostream>

using namespace std;

int main() {
    int x, y;
    cout << "What's x? ";
    cin >> x;
    cout << "What's y? ";
    cin >> y;

    cout << static_cast<float>(x) / y << "\n";// bits problem 
    return 0;
}