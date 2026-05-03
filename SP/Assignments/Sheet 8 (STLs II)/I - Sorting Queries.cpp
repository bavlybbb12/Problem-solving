#include <iostream>
#include <queue>
#include <vector>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int Q;
    if (!(cin >> Q)) return 0;

    queue<long long> q;
    priority_queue<long long, vector<long long>, greater<long long>> pq;

    while (Q--) {
        int type;
        cin >> type;

        if (type == 1) {
            long long x;
            cin >> x;
            q.push(x);
        } 
        else if (type == 2) {
            if (!pq.empty()) {
                cout << pq.top() << "\n";
                pq.pop();
            } else {
                cout << q.front() << "\n";
                q.pop();
            }
        } 
        else if (type == 3) {
            while (!q.empty()) {
                pq.push(q.front());
                q.pop();
            }
        }
    }

    return 0;
}