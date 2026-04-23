#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];
    vector<int> stairs;
    int count = 0;
    for (int i = 0; i < n; i++) {
        count++;
        if (i + 1 < n && a[i + 1] == 1) {
            stairs.push_back(count);
            count = 0;
        }
    }
    stairs.push_back(count);
    cout << stairs.size() << "\n";
    for (int x : stairs) cout << x << " ";
    cout << "\n";
}
