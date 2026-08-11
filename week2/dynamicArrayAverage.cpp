#include <iostream>
#include <limits> 

using namespace std;

float average(int length, int* array);

int main() {
    int n;
    cout << "how many numbers do you want to enter? ";
    
    
    while (!(cin >> n) || n <= 0) {
        if (cin.fail()) {
            cin.clear(); // Clear the error state
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Sweep the buffer
        }
        cout << "Invalid input. Please enter a positive integer: ";
    }

    
    // 'scores' is a pointer to the first element of the newly allocated block.
    int* scores = new int[n];//  Dynamic memory allocation at runtime

    for (int i = 0; i < n; i++) {
        cout << "Score " << i + 1 << ": ";
        
        
        while (!(cin >> scores[i])) {
            cout << "Enter proper nmber please " << i + 1 << ": ";
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }
    }
    
    cout << "Average: " << average(n, scores) << "\n";

    delete[] scores; // Free the heap  
    
    return 0;
}

float average(int length, int* array) {
    int sum = 0;
    for (int i = 0; i < length; i++) {
        sum += array[i];
    }
    
    return static_cast<float>(sum) / length; 
}