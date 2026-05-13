#include <iostream>
#include <vector>
#include <algorithm>
#include <set>

using namespace std;

void solve() {
    int n, r;
    cin >> n >> r;

    set<int> st;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        st.insert(x);
    }

    vector<int> v;
    for (int x : st) {
        v.push_back(x);
    }
    sort(v.rbegin(), v.rend());

    int shots = 0;
    for (int i = 0; i < v.size(); i++) {
        if (v[i] - (shots * r) > 0) {
            shots++;
        } else {
            break;
        }
    }

    cout << shots << endl;
}

int main() {
    int q;
    cin >> q;
    while (q--) {
        solve();
    }
    return 0;
}