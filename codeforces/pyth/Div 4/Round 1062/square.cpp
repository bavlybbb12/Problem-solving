#include <iostream>
using namespace std;

int main () {

    int test;
    cin >> test;
    int step = 0;
    while ( step < test ) {

        int a, b, c, d;
        cin >> a >> b >> c >> d ;

        if ( a == b && b == c && c == d && d == a ) {
            cout << "YES" << endl ;
        } else {
            cout << "NO" << endl ;
        }

        step++ ;
    }

    return 0 ;
}