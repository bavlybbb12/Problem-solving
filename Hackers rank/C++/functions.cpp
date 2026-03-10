#include <iostream>
using namespace std;

int max (int a , int b , int c , int d ) {

    int arr [4] = {a , b , c , d } ;
    int max = arr [0] ;
    for (int i = 1 ; i < 4 ; i++ ) {
        if (arr [i] > max ) {
            max = arr [i] ;
        }
    }
    return max ;
}

int main () {
    
    int a , b , c , d ;
    
    cin >> a ;
    cin >> b ;
    cin >> c ;
    cin >> d ;
    
    cout << max (a , b , c , d ) << endl ;
    
    return 0 ;
}