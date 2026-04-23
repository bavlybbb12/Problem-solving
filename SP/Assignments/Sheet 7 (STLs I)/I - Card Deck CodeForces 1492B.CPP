#include <iostream>
#include <vector>
using namespace std;

int main() {

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> p(n);
        for (int i = 0; i < n; i++) cin >> p[i];

        int pos = n - 1;
        vector<int> result;
        while (pos >= 0) {
            int mx = p[0];
            int idx = 0;
            for (int i = 0; i <= pos; i++) {
                if (p[i] > mx) {
                    mx = p[i];
                    idx = i;
                }
            }
            for (int i = idx; i <= pos; i++) result.push_back(p[i]);
            pos = idx - 1;
        }

        for (int i = 0; i < (int)result.size(); i++) {
            cout << result[i] << (i + 1 == result.size() ? '\n' : ' ');
        }
    }
}
