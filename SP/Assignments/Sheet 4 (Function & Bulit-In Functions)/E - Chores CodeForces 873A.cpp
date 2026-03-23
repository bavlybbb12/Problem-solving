#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n, k, x;
    cin >> n >> k >> x;

    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int total_time = 0;

    for (int i = 0; i < n - k; i++) {
        total_time += a[i];
    }

    for (int i = n - k; i < n; i++) {
        total_time += x;
    }

    cout << total_time << "\n";

    return 0;
}