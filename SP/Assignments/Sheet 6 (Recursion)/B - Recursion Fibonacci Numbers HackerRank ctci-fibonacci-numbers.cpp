#include <iostream>
using namespace std;

long long arr[100] = {0} ;

long long fib (int n ) {

    if ( n <= 1) return n ;

    if ( arr[n] != 0 ) return arr[n] ;

    arr[n] = fib(n-2) + fib(n-1) ;
    
    return arr[n] ;

}

int main () {

    int n ;
    cin >> n ;
    cout << fib (n) << endl ;

}