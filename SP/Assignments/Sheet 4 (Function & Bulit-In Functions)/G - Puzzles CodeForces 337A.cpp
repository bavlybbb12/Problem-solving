#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    vector<int> f(m);
    for (int i = 0; i < m; i++) {
        cin >> f[i];
    }

    sort(f.begin(), f.end());

    int min_diff = 10000; 

    for (int i = 0; i <= m - n; i++) {
        int current_diff = f[i + n - 1] - f[i];
        if (current_diff < min_diff) {
            min_diff = current_diff;
        }
    }

    cout << min_diff << "\n";

    return 0;
}