#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n;
    long long m; 
    
    cin >> n >> m;

    long long sum = 0;
    vector<int> diff(n);

    for (int i = 0; i < n; i++) {
        int original, compressed;
        cin >> original >> compressed;
        
        sum += original;
        diff[i] = original - compressed;
    }

    sort(diff.rbegin(), diff.rend());

    int count = 0;

    for (int i = 0; i < n; i++) {
        if (sum <= m) {
            break;
        }
        sum -= diff[i];
        count++;
    }

    if (sum > m) {
        cout << "-1\n";
    } else {
        cout << count << "\n";
    }

    return 0;
}