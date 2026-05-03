#include <iostream>
#include <stack>
#include <string>
using namespace std;

string isBalanced(string s) {
    stack<char> st;
    for (char c : s) {
        if (c == '(' || c == '{' || c == '[') {
            st.push(c);
        } else {
            if (st.empty()) {
                return "NO";
            }
            char top = st.top();
            if ((c == ')' && top == '(') || 
                (c == '}' && top == '{') || 
                (c == ']' && top == '[')) {
                st.pop();
            } else {
                return "NO";
            }
        }
    }
    return st.empty() ? "YES" : "NO";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    if (cin >> t) {
        while (t--) {
            string s;
            cin >> s;
            cout << isBalanced(s) << "\n";
        }
    }
    
    return 0;
}