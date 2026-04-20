#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

long long sum(string& s, int i = 0) {
    if (i == s.size()) return 0;
    return (int(s[i]) - int('0')) + sum(s, i + 1);
}

long long sum1(long long n) {
    if (n == 0) return 0;
    return (n % 10) + sum1(n / 10);
}

long long super(long long n) {
    if (n < 10) return n;
    return super(sum1(n));
}

int main() {
    string n;
    int k;
    
    cin >> n >> k;

    long long initial_sum = sum(n) * k;

    cout << super(initial_sum) << endl;
    
    return 0;
}