#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;

        vector<long long> solutions;

        long long power = 10; 
        for (int k = 1; k <= 18; k++) {
            long long divisor = power + 1; 
            if (divisor > n) break;

            if (n % divisor == 0) {
                solutions.push_back(n / divisor);
            }
            power *= 10; 
        }

        if (solutions.empty()) {
            cout << 0 << "\n";
        } else {
            sort(solutions.begin(), solutions.end());
            cout << solutions.size();
            for (size_t i = 0; i < solutions.size(); i++) {
                cout << " " << solutions[i];
            }
            cout << "\n";
        }
    }
    return 0;
} 