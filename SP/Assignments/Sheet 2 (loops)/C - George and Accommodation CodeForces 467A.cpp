#include <iostream>
using namespace std ;
int main () {
    int n , p , q , f;
    cin >> n ;
    f = 0 ;
    for (int i = 0 ; i < n ; i ++) {
        cin >> p >> q ;
        if ( q - p >= 2) { f++ ;}
    }
    cout << f ;
}