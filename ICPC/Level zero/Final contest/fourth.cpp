#include <iostream>
#include <vector>
#include <string>
#include <list>
using namespace std;

void printBinary(long long n) {

    if (n > 1) {
        printBinary(n / 2);
    }
    
    cout << (n % 2);
}

int main() {
    
    int t;
    cin >> t;

    while (t--) {
        long long n;
        cin >> n;

        printBinary(n);
        cout << "\n";
    }

    return 0;
}