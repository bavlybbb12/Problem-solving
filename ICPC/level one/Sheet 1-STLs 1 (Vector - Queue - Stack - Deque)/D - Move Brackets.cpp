#include <iostream>
#include <string>
#include <algorithm> 

using namespace std;

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int trials;
    cin >> trials;

    for (int i = 0; i < trials; i++) {
        int n;
        cin >> n;
        string s;
        cin >> s;

        int balance = 0;
        int lowest_dip = 0;

        for (char k : s) {
            if (k == '(') {
                balance++;
            } else if (k == ')') {
                balance--;
            }
            
            if (balance < lowest_dip) {
                lowest_dip = balance;
            }
        }

        cout << abs(lowest_dip) << '\n';
    }

    return 0;
}