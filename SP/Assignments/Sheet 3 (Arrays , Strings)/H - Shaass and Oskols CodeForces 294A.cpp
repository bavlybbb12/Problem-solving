#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    vector<int> a(n + 1);
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
    }

    int m;
    cin >> m;
    
    for (int i = 0; i < m; i++) {
        int x, y;
        cin >> x >> y;

        int left_birds = y - 1;
        int right_birds = a[x] - y;

        if (x > 1) {
            a[x - 1] += left_birds;
        }
        if (x < n) {
            a[x + 1] += right_birds;
        }
        
        a[x] = 0;
    }

    for (int i = 1; i <= n; i++) {
        cout << a[i] << "\n";
    }

    return 0;
}