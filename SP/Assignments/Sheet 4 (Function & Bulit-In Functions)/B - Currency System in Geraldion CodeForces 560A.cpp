#include <iostream>

using namespace std;

int main() {
    int n, bill;
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> bill;
        if (bill == 1) {
            cout << -1 << "\n";
            return 0;
        }
    }

    cout << 1 << "\n";
    
    return 0;
}