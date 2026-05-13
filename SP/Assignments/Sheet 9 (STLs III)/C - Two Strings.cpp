#include <iostream>
#include <string>
#include <set>

using namespace std;

int main() {
    int p;
    cin >> p;
    while (p--) {
        string s1, s2;
        cin >> s1 >> s2;

        set<char> st;
        for (char c : s1) {
            st.insert(c);
        }

        bool found = false;
        for (char c : s2) {
            if (st.count(c)) {
                found = true;
                break;
            }
        }

        if (found) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}