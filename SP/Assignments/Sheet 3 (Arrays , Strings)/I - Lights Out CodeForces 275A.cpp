#include <iostream>
using namespace std;

int main() {
    int a[9];
    
    for (int i = 0; i < 9; i++) {
        cin >> a[i];
    }

    for (int i = 0; i < 9; i++) {
        int toggles = a[i];
        
        if (i >= 3) toggles += a[i - 3];
        if (i <= 5) toggles += a[i + 3];
        if (i % 3 != 0) toggles += a[i - 1];
        if (i % 3 != 2) toggles += a[i + 1];

        if (toggles % 2 == 0) {
            cout << 1;
        } else {
            cout << 0;
        }

        if (i % 3 == 2) {
            cout << "\n";
        }
    }

    return 0;
}