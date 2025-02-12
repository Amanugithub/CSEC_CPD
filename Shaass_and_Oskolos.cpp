#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n; // Number of wires

    vector<int> birds(n);
    for (int i = 0; i < n; i++) {
        cin >> birds[i]; 
    }

    int m;
    cin >> m; // Number of shots

    for (int i = 0; i < m; i++) {
        int wire, position;
        cin >> wire >> position; 

        wire--; 

       
        if (wire > 0) {
            birds[wire - 1] += position - 1;
        }

      
        if (wire < n - 1) {
            birds[wire + 1] += birds[wire] - position;
        }


        birds[wire] = 0;
    }


    for (int i = 0; i < n; i++) {
        cout << birds[i] << endl;
    }

    return 0;
}