#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    string s;
    cin >> s;

    while (!s.empty() && s.back() == '0') {
        s.pop_back();
    }

    string rev = s;
    reverse(rev.begin(), rev.end());

    if (s == rev) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }

    return 0;
}