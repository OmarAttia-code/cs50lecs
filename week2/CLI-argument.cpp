//must run with command line argument in terminal .
#include <iostream>
#include <string>

using namespace std;


int main(int argc, char* argv[]) {
    
    if (argc != 2) {
      
        cerr << "Missing command-line argument\n";
        return 1; 
    }
    
    
    string name = argv[1];
    
    cout << "hello, " << name << "\n";
    
    return 0; 
}