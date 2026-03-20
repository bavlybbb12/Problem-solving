#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    int n;
    cin >> n;

    for (int i = 0; i < n; i++) {
        string s;
        cin >> s;

        sort(s.begin(), s.end());

        bool isDiverse = true;

        for (int j = 1; j < s.length(); j++) {
            if (s[j] - s[j - 1] != 1) {
                isDiverse = false;
                break;
            }
        }

        if (isDiverse) {
            cout << "Yes\n";
        } else {
            cout << "No\n";
        }
    }

    return 0;
}