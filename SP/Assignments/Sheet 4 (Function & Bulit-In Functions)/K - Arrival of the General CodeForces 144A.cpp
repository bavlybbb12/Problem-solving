#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;

    int max_val = 0;
    int max_idx = 0;
    int min_val = 1000; 
    int min_idx = 0;

    for (int i = 0; i < n; i++) {
        int h;
        cin >> h;

        if (h > max_val) {
            max_val = h;
            max_idx = i;
        }

        if (h <= min_val) {
            min_val = h;
            min_idx = i;
        }
    }

    int swaps = max_idx + (n - 1 - min_idx);

    if (max_idx > min_idx) {
        swaps--;
    }

    cout << swaps << "\n";

    return 0;
}