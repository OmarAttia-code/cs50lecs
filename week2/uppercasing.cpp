#include <iostream>
#include <string>
#include <cctype> 

using namespace std;

int main() {
    string s;
    cout << "Before: ";
    getline(cin, s);
    
    cout << "After:  ";
    
    
    for (char c : s) {
        // toupper returns an int, so we cast it back to a char
        cout << static_cast<char>(toupper(c)); 
    }
    cout << "\n";
    
    return 0;
}