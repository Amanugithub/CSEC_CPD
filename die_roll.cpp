#include <iostream>
#include <algorithm>

using namespace std;

int gcd(int a, int b) {
    return b == 0 ? a : gcd(b, a % b);
}

int main() {
    int y, w;
    cin >> y >> w;

    int maxRoll = max(y, w);
    int favorable = 6 - maxRoll + 1;
    int denominator = 6;

    int divisor = gcd(favorable, denominator);
    cout << (favorable / divisor) << "/" << (denominator / divisor) << endl;

    return 0;
}
