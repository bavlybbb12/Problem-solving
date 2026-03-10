#include <iostream>
using namespace std;

int main() {
    string s;
    cin >> s;
    

    if (s == "RRR") {
        cout << 3 << endl;
    }
    
    else if (s == "RRS" || s == "SRR") {
        cout << 2 << endl;
    }
    
    else if (s.find('R') != -1) {
        cout << 1 << endl;
    }
    
    else {
        cout << 0 << endl;
    }
}