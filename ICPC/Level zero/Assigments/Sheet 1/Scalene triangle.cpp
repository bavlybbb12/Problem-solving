#include <iostream> // Made by bavly boules

using namespace std;

int main () {

    long long A , B , C ;
    cin >> A >> B >> C ;

    if ( A != B && B != C && C != A ) {
        cout << "YES" << endl ;
    }
    else {
        cout << "NO" << endl ;
    }

    return 0 ;
}