#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;

    int min_score = 0;
    int max_score = 0;
    int amazing_count = 0;

    for (int i = 0; i < n; i++) {
        int score;
        cin >> score;

        if (i == 0) {
            min_score = score;
            max_score = score;
        } else {
            if (score > max_score) {
                amazing_count++;
                max_score = score;
            } else if (score < min_score) {
                amazing_count++;
                min_score = score;
            }
        }
    }

    cout << amazing_count << "\n";

    return 0;
}