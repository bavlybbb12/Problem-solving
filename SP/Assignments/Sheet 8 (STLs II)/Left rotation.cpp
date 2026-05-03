#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> rotateLeft(int d, vector<int> arr) {
    int n = arr.size();
    d %= n; 
    
    rotate(arr.begin(), arr.begin() + d, arr.end());
    
    return arr;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n, d;
    if (cin >> n >> d) {
        vector<int> arr(n);
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        
        vector<int> result = rotateLeft(d, arr);
        
        for (int i = 0; i < n; i++) {
            cout << result[i] << (i == n - 1 ? "" : " ");
        }
        cout << "\n";
    }
    
    return 0;
}