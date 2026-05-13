#include <iostream>
#include <string>
#include <map>

using namespace std;

int main() {
    int n;
    cin >> n;
    map<string, int> m;
    while (n--) {
        string s;
        cin >> s;
        if (m[s] == 0) {
            cout << "OK" << endl;
            m[s] = 1;
        } else {
            cout << s << m[s] << endl;
            m[s]++;
        }
    }
    return 0;
}