#include <iostream>

using namespace std;

void print_row(int width);

int main() {
    const int n = 3;// can be changed or taken from user 
    for (int i = 0; i < n; i++) {
        print_row(n);
    }
    return 0;
}

void print_row(int width) {
    for (int i = 0; i < width; i++) {
        cout << "#";
    }
    cout << "\n";
}