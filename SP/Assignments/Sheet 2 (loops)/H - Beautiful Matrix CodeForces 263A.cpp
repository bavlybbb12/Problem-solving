#include <iostream>
using namespace std;

int main() {
    int steps = 0;
    int arr[5];
    int row = 0;
    int col = 0;

    int r = 0;
    while (r < 5) {
        for (int i = 0; i < 5; i++) {
            cin >> arr[i];
            if (arr[i] == 1) {
                row = r; 
                col = i; 
            }
        }
        r++;
    }

    while (col != 2) {
        if (col > 2) {
            col--;
            steps++;
        } else {
            col++;
            steps++;
        }
    }

    while (row != 2) {
        if (row > 2) {
            row--;
            steps++;
        } else {
            row++;
            steps++;
        }
    }

    cout << steps;

}