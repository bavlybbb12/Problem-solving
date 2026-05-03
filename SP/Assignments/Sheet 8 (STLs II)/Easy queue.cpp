#include <iostream>
#include <queue>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int T;
    if (!(cin >> T)) return 0; 

    queue<int> q;

    while (T--) {
        int type;
        cin >> type;

        if (type == 1) {
            int n;
            cin >> n;
            q.push(n);
        } 
        else if (type == 2) {
            if (!q.empty()) {
                q.pop();
            }
        } 
        else if (type == 3) {
            if (q.empty()) {
                cout << "Empty!\n";
            } else {
                cout << q.front() << "\n";
            }
        }
    }

    return 0;
}