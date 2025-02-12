#include <iostream>
#include <string>
using namespace std;

int main() {
    int n;
    cin >> n;

    string stones;
    cin >> stones;

    int removeCount = 0;

    for (int i = 0; i < n - 1; i++) {
        if (stones[i] == stones[i + 1]) {
            removeCount++;
        }
    }

    cout << removeCount << endl;
    return 0;
}