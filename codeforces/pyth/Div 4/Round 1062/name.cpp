# include <iostream>
#include <algorithm>

using namespace std ;

int main () {    
    int cases ;
    cin >> cases ;
    int steps = 0 ;

    while ( steps < cases ) {
        int index ;
        cin >> index ;
        char first [index ] ;
        char second [ index ] ;
        cin >> first ;
        cin >> second ;
        sort( first, first + index ) ;
        sort( second, second + index ) ;
        if ( first == second ) {
            cout << "YES" << endl ;
        } else {
            cout << "NO" << endl ;
        }

        steps++ ;
    }

    return 0 ;
}