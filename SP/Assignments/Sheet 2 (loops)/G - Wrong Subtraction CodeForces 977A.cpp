#include <iostream>
using namespace std ;
int main () {
    int n , k ;
    cin >> n >> k ;
    int sub = 0 ;
    while ( sub < k ) {
        if ( n % 10 != 0 ) { n-- ; sub ++ ; continue ;}
        else { n = n /10  ; sub ++ ;}
    }
    cout << n ;
}