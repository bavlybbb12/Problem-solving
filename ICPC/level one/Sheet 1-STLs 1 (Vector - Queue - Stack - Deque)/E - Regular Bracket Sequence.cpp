#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    cin >> s;
    
    int opens = 0;
    int pairs = 0;
    
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == '(') {
            opens++;
        } 
        else if (s[i] == ')') {
            if (opens > 0) {
                pairs++;               
                opens--;    
            }
        }
    }
    
    cout << pairs * 2 << "\n";

    return 0;
}