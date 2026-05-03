#include <iostream>
#include <queue>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m;
    if (cin >> n >> m) {
        queue<pair<int, int>> q;
        for (int i = 1; i <= n; i++) {
            int a;
            cin >> a;
            q.push({i, a});
        }

        int last_child = 0;
        
        while (!q.empty()) {
            int id = q.front().first;
            int remaining = q.front().second - m;
            q.pop();

            if (remaining > 0) {
                q.push({id, remaining});
            } else {
                last_child = id;
            }
        }

        cout << last_child << "\n";
    }

    return 0;
}