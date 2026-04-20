#include <iostream>
#include <vector>
using namespace std;

void remover(const vector<int>& s, int k, int i = 0) {
    if (i >= s.size()) {
        return;
    }
    
    if (s[i] != k) {
        cout << s[i] << " ";
    }
    
    remover(s, k, i + 1);
}

int main() {
    int n, k;
    cin >> n >> k;
    
    vector<int> s(n);

    for (int i = 0; i < n; i++) {
        cin >> s[i]; 
    }

    remover(s, k);
    
    cout << endl;

    return 0;
}