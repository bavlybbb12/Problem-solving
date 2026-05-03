#include <iostream>
#include <set>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    if (!(cin >> n)) return 0;

    multiset<long long> s;
    long long health = 0;
    int potions = 0;

    for (int i = 0; i < n; i++) {
        long long a;
        cin >> a;

        health += a;
        potions++;

        if (a < 0) {
            s.insert(a);
        }

        if (health < 0) {
            health -= *s.begin();
            s.erase(s.begin());
            potions--;
        }
    }

    cout << potions << "\n";

    return 0;
}