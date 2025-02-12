
#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n; // Number of events

    int recruits = 0; 
    int untreated = 0; 

    for (int i = 0; i < n; i++) {
        int event;
        cin >> event; 

        if (event == -1) { // Crime
            if (recruits > 0) {
                recruits--; // Handle the crime
            } else {
                untreated++; // Crime goes untreated
            }
        } else { // Recruit
            recruits += event; // Add recruits
        }
    }

    cout << untreated << endl; // Output the result
    return 0;
}
