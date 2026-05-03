#include <iostream>
#include <stack>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int T;
    if (!(cin >> T)) return 0;

    stack<int> s;

    while (T--) {
        int type;
        cin >> type;

        if (type == 1) {
            int n;
            cin >> n;
            s.push(n);
        } 
        else if (type == 2) {
            if (!s.empty()) {
                s.pop();
            }
        } 
        else if (type == 3) {
            if (s.empty()) {
                cout << "Empty!\n";
            } else {
                cout << s.top() << "\n";
            }
        }
    }

    return 0;
}