#include <iostream>
#include <set>
using namespace std;

int main() {
    int s1, s2, s3, s4;
    cin >> s1 >> s2 >> s3 >> s4; 


    set<int> colors = {s1, s2, s3, s4};

    // Calculate the number of horseshoes to buy
    int horseshoesToBuy = 4 - colors.size();

    cout << horseshoesToBuy << endl; 
    return 0;
}