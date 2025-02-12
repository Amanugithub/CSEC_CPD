#include <iostream>
using namespace std;

int main() {
    int k, r;
    cin >> k >> r; 

    int count = 1; 
    while (true) {
        int totalCost = k * count;
        if (totalCost % 10 == 0 || totalCost % 10 == r) {
            break; // Condition satisfied
        }
        count++; 
    }

    cout << count << endl; 
    return 0;
}