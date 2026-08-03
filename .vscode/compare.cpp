#include <iostream>

using namespace std;

int main() {
    int x, y;
    cout << "What's x? ";
    cin >> x;
    cout << "What's y? ";
    cin >> y;

    if (x < y) {
        cout << "x is less than y\n";
    } else if (x > y) {
        cout << "x is greater than y\n";
    } else /*not elif to save resources ( only condition left) as in video*/{
        cout << "x is equal to y\n";
    }
    return 0;
}