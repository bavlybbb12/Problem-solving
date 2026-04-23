#include <iostream>
#include <string>
using namespace std;

int main() {

    int t;
    cin >> t;
    while (t--) {
        int k;
        string s;
        cin >> k >> s;
        int ans = 0;
        for (int i = 0; i < k; i++) {
            if (s[i] == 'A') {
                int cnt = 0;
                int j = i + 1;
                while (j < k && s[j] == 'P') {
                    cnt++;
                    j++;
                }
                ans = max(ans, cnt);
            }
        }
        cout << ans << "\n";
    }
}
