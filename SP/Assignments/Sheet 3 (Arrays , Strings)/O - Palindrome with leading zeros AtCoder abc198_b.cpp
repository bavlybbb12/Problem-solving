#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    string s;
    cin >> s;

    while (s.back() == '0' && s.size() > 1) {
        s.pop_back();
    }

    string reversed_s = s;
    reverse(reversed_s.begin(), reversed_s.end());

    if (s == reversed_s) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }

    return 0;
}