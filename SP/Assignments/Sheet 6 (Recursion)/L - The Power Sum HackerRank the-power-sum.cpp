#include <iostream>
#include <cmath>

using namespace std;

int calculate(int X, int N, int currentNum) {
    int value = pow(currentNum, N);

    if (value < X) {
        return calculate(X - value, N, currentNum + 1) + calculate(X, N, currentNum + 1);
    } else if (value == X) {
        return 1;
    } else {
        return 0;
    }
}

int powerSum(int X, int N) {
    return calculate(X, N, 1);
}

int main() {
    int X, N;
    cin >> X >> N;
    cout << powerSum(X, N) << endl;
    return 0;
}