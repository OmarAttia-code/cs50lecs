#include <iostream>
#include <string>

using namespace std;

int main() {
    string s;
    cout << "Input:  ";
    getline(cin, s); 
    
    cout << "Output: ";
    
    // std::string has a built-in .length() method
    for (int i = 0, n = s.length(); i < n; i++) {
        cout << s[i];
    }
    cout << "\n";
    
    return 0;
}