#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> p(n), q(n);
    for (int i = 0; i < n; i++) cin >> p[i];
    for (int i = 0; i < n; i++) cin >> q[i];

    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        a[i] = i + 1;
    }

    int current_rank = 1;
    int rank_p = 0;
    int rank_q = 0;

    while (true) {
        if (a == p) {
            rank_p = current_rank;
        }
        if (a == q) {
            rank_q = current_rank;
        }
        
        if (!next_permutation(a.begin(), a.end())) {
            break;
        }
        
        current_rank++;
    }

    cout << abs(rank_p - rank_q) << "\n";

    return 0;
}