#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n; 

    int current_count = 0;
    int max_capacity = 0;

    for (int i = 0; i < n; i++) {
        int out, in;
        cin >> out >> in;

        current_count -= out;
        current_count += in;

        if (current_count > max_capacity) {
            max_capacity = current_count;
        }
    }

    cout << max_capacity << "\n";

    return 0;
}