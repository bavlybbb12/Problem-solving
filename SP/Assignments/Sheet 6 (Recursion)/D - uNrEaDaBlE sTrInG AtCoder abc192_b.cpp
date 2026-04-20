#include <iostream>
#include <string>
using namespace std;

bool odd(string& s, int i = 1) {
    
    if (i >= s.size()) return true;
    if (!(s[i] >= 65 && s[i] <= 90)) return false;
    return odd(s, i + 2);
    
}

bool even(string& s, int i = 0) {
    
    if (i >= s.size()) return true;
    if (!(s[i] >= 97 && s[i] <= 122)) return false;
    return even(s, i + 2);

}

int main() {
    string s;
    cin >> s;
    
    if (even(s) && odd(s)) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
    
    return 0;
}