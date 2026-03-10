#include <iostream>
using namespace std;

int main () {

    int trial ;
    cin >> trial ;
    int total = 0 ;
    int final = 0 ;


    for ( int i = 0 ; i < trial ; i ++ ) {
        total = 0 ;
        int a , b , c ;
        cin >> a >> b >> c ;
        total += a + b + c ;
        if ( total >= 2 ) { final ++ ; total = 0 ;}
    
    }
    cout << final  ;
    return 0 ;
}