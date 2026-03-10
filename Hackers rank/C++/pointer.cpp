#include <iostream>
using namespace std;

void increment ( int *a , int *b) {

    int sum = *a + *b ;
    int diff = 0 ;

    if ( *a > *b ) {
        diff = *a - *b ;
        
    }
    else if ( *b > *a ) {
        diff = *b - *a ;
    }
    else {
        diff = 0 ;
    }
    
    *a = sum ;
    *b = diff ;
}


int main() {
    int a , b ;
    cin >> a ;
    cin >> b ;

    increment ( &a , &b ) ;
    cout << a << endl << b ;
    return 0 ;
}