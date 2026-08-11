#include <iostream>

using namespace std;

int get_positive_int();
void meow(int n); /* function prototype  that tells compiler this will be wrote later*/

int main() {
    int n = get_positive_int();
    meow(n);
    return 0;
}

int get_positive_int() {
    int n;
    do {
        cout << "Number: ";
        cin >> n;
    } while (n < 1);
    return n;
}

void meow(int n) {
    for (int i = 0; i < n; i++) {
        cout << "meow\n";
    }
}