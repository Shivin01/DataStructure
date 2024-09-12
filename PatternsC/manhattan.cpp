#include <iostream>
using namespace std;

void printPattern(int n) {
    int size = 2 * n - 1;  // Size of the square matrix
    
    // Loop to generate the pattern
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            // Find the minimum distance from the edge (Manhattan distance from the nearest edge)
            int value = n - min(min(i, j), min(size - i - 1, size - j - 1));
            cout << value;
        }
        cout << endl;
    }
}

int main() {
    int n = 4;
    printPattern(n);
    return 0;
}
