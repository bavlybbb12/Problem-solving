#include <iostream>
#include <string>

using namespace std;

int main() {
    char d;
    string s, k = "qwertyuiopasdfghjkl;zxcvbnm,./";
    cin >> d >> s;

    for (int i = 0; i < s.length(); i++) {
        int p = k.find(s[i]);
        if (d == 'R') {
            cout << k[p - 1];
        } else {
            cout << k[p + 1];
        }
    }
    cout << endl;

    return 0;
}