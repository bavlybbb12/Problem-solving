#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<long long> v;

void gen(long long x) {
    if (x > 10000000000LL) {
        return;
    }
    
    v.push_back(x);
    
    gen(x * 10 + 4);
    gen(x * 10 + 7);
}

int main() {
    long long n;
    cin >> n;
    
    gen(4);
    gen(7);
    
    sort(v.begin(), v.end());
    
    for (int i = 0; i < v.size(); i++) {
        if (v[i] == n) {
            cout << i + 1 << endl;
            break;
        }
    }
    
    return 0;
}