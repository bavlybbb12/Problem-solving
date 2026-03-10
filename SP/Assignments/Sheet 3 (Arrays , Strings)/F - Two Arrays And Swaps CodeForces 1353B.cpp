#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int trials;
    cin >> trials;

    for (int i = 0; i < trials; i++) {
        int number, moves;
        cin >> number >> moves;
        
        vector<int> a(number);
        vector<int> b(number);

        for (int j = 0; j < number; j++) cin >> a[j];
        for (int j = 0; j < number; j++) cin >> b[j];

        sort(a.begin(), a.end());
        sort(b.begin(), b.end(), greater<int>());

        for (int j = 0; j < moves; j++) {
            if (b[j] > a[j]) {
                a[j] = b[j]; 
            } else {
                break; 
            }
        }

        int sum = 0;
        for (int j = 0; j < number; j++) {
            sum += a[j];
        }

        cout << sum << "\n";
    }

    return 0;
}