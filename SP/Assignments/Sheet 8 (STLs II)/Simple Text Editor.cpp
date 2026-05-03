#include <iostream>
#include <string>
#include <stack>
using namespace std;

struct History {
    int type;
    int len;
    string str;
};

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int q;
    if (!(cin >> q)) return 0;

    string s = "";
    stack<History> st;

    while (q--) {
        int type;
        cin >> type;

        if (type == 1) {
            string w;
            cin >> w;
            st.push({1, (int)w.length(), ""});
            s += w;
        } 
        else if (type == 2) {
            int k;
            cin >> k;
            string tail = s.substr(s.length() - k);
            st.push({2, 0, tail});
            s.erase(s.length() - k);
        } 
        else if (type == 3) {
            int k;
            cin >> k;
            cout << s[k - 1] << "\n";
        } 
        else if (type == 4) {
            if (!st.empty()) {
                History h = st.top();
                st.pop();
                
                if (h.type == 1) {
                    s.erase(s.length() - h.len);
                } 
                else if (h.type == 2) {
                    s += h.str;
                }
            }
        }
    }

    return 0;
}