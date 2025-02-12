#include <iostream>
#include <string>
using namespace std;

int main() {
    string stones, instructions;
    cin >> stones >> instructions; // Read the stones and instructions

    int position = 0; // Start at the first stone (0-based index)

    for (char instruction : instructions) {
        if (stones[position] == instruction) {
            position++; // Move to the next stone
        }
    }

    cout << position + 1 << endl; // Output the final position (1-based index)
    return 0;
}