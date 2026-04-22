#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++) cin >> v[i];

    vector<int> neg, pos, zero;
    for (int x : v) {
        if (x < 0) neg.push_back(x);
        else if (x > 0) pos.push_back(x);
        else zero.push_back(x);
    }

    vector<int> set1 = {neg.back()};
    neg.pop_back();

    vector<int> set2;
    if (!pos.empty()) {
        set2 = pos;
    } else {
        set2.push_back(neg.back()); neg.pop_back();
        set2.push_back(neg.back()); neg.pop_back();
    }

    vector<int> set3 = zero;
    for (int x : neg) set3.push_back(x);

    cout << set1.size() << " ";
    for (int x : set1) cout << x << " ";
    cout << "\n";

    cout << set2.size() << " ";
    for (int x : set2) cout << x << " ";
    cout << "\n";

    cout << set3.size() << " ";
    for (int x : set3) cout << x << " ";
    cout << "\n";
}
