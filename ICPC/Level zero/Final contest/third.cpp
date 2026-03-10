#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
 
    int n;
    cin >> n;
    string s;
    cin >> s;

    vector<bool> alphabet(26, false);

    for (int i = 0; i < n; i++) {
        char c = s[i];

        
        if (c >= 'A' && c <= 'Z') {
            int index = c - 'A'; 
            alphabet[index] = true;
        }
        
        else if (c >= 'a' && c <= 'z') {
            int index = c - 'a'; 
            alphabet[index] = true;
        }
    }

    
    bool isPangram = true;
    for (int i = 0; i < 26; i++) {
        if (alphabet[i] == false) {
            isPangram = false;
            break; 
        }
    }

    if (isPangram) {
        cout << "YES";
    } else {
        cout << "NO";
    }

    return 0;
}