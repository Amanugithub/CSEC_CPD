#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    string word;
    cin >> word;

    char current = 'a';
    int totalRotations = 0;

    for (char ch : word) {
        int clockwise = abs(ch - current);
        int counterclockwise = 26 - clockwise;
        totalRotations += min(clockwise, counterclockwise);
        current = ch;
    }

    cout << totalRotations << endl;
    return 0;
}