#include <iostream>
#include <set>

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    set<int> s;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        while (x--) {
            int y;
            cin >> y;
            s.insert(y);
        }
    }

    if (s.size() == m) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}