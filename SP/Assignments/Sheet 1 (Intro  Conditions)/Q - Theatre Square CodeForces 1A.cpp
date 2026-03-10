#include <iostream>
using namespace std;

int main () {
    
    long long n, m, a;
    cin >> n >> m >> a;

    long long stones_for_n = (n + a - 1) / a;


    long long stones_for_m = (m + a - 1) / a;

    cout << stones_for_n * stones_for_m ;

    return 0;
}