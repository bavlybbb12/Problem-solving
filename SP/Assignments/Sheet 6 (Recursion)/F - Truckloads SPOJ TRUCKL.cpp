#include<iostream>
using namespace std ;

long long loads ( int n , int k ) {

    if ( n <= k ) return 1 ;
    return loads ( n/2 , k ) + loads ( n/2 + n%2 , k ) ;

}

int main () {

    int n , k ;
    
    while (cin >> n >> k) {
        cout << loads ( n , k ) << endl ;
    }

    return 0 ;

}