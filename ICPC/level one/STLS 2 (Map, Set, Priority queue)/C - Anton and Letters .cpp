#include <iostream>
#include <set>

using namespace std;

int main() {
    set<char> distinct_letters;
    char c;

    while (cin >> c) {
        if (c >= 'a' && c <= 'z') {
            distinct_letters.insert(c);
        }
        if (c == '}') {
            break;
        }
    }

    cout << distinct_letters.size() << endl;

    return 0;
}