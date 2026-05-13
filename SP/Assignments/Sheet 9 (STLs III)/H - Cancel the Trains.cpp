#include <iostream>
#include <set>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;

        set<int> s;
        for (int i = 0; i < n; i++) {
            int x;
            cin >> x;
            s.insert(x);
        }

        int count = 0;
        for (int i = 0; i < m; i++) {
            int y;
            cin >> y;
            if (s.count(y)) {
                count++;
            }
        }

        cout << count << endl;
    }
    return 0;
}