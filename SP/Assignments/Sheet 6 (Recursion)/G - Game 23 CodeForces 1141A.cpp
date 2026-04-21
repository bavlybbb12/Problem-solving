#include <iostream>
using namespace std;

long long recursive(long long n, long long m) {
    
    if (m % n != 0) return -1;
    
    long long k = m / n;
    if (k == 1) return 0;
    
    if (k % 2 == 0) {
        long long steps = recursive(n, m / 2);
        if (steps != -1) {
            return 1 + steps;
        }
    }

    if (k % 3 == 0) {
        long long steps = recursive(n, m / 3);
        if (steps != -1) {
            return 1 + steps;
        }
    }
    
    return -1;
}

int main() {
    long long n, m;
    cin >> n >> m;
    cout << recursive(n, m) << endl;
    return 0;
}