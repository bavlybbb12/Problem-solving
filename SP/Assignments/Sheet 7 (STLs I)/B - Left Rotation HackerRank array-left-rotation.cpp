#include <iostream>
#include <vector>
using namespace std;

vector<int> rotateLeft(int d, vector<int> arr) {
    int n = arr.size();
    vector<int> result(n);
    for (int i = 0; i < n; i++) {
        result[i] = arr[(i + d) % n];
    }
    return result;
}

int main() {
    int n, d;
    cin >> n >> d;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) cin >> arr[i];
    vector<int> rotated = rotateLeft(d, arr);
    for (int x : rotated) cout << x << " ";
    cout << endl;
}
