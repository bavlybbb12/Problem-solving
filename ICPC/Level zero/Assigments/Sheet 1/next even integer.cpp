#include <iostream>
#include <cstdlib>

using namespace std; 

int main() {
    int n;
    cin >> n;
    cout << n + 2 - (abs(n + 1) % 2) << endl;
    return 0;
}