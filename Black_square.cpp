#include <iostream>
#include <string>
using namespace std;

int main() {
    int a1, a2, a3, a4;
    cin >> a1 >> a2 >> a3 >> a4;

    string s;
    cin >> s;

    int count1 = 0, count2 = 0, count3 = 0, count4 = 0;

    for (char ch : s) {
        if (ch == '1') count1++;
        else if (ch == '2') count2++;
        else if (ch == '3') count3++;
        else if (ch == '4') count4++;
    }

    int totalEnergy = count1 * a1 + count2 * a2 + count3 * a3 + count4 * a4;

    cout << totalEnergy << endl;
    return 0;
}