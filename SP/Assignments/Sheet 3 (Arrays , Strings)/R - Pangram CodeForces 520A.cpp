#include <iostream>
#include <string>
#include <set>
#include <cctype>

using namespace std;

int main() {
    int n;
    cin >> n;
    
    string s;
    cin >> s;

    if (n < 26) {
        cout << "NO\n";
        return 0;
    }

    set<char> letters;
    
    for (int i = 0; i < n; i++) {
        letters.insert(tolower(s[i]));
    }

    if (letters.size() == 26) {
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }

    return 0;
}