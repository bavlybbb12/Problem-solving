#include <iostream>
#include <string>
using namespace std;

int main() {
    int no;
    cin >> no;

    for (int i = 0; i < no; i++) {
        string s;
        cin >> s;

        if (s.size() % 2 == 0 && s[0] != ')' && s.back() != '(') {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }

    return 0;
}