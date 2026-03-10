#include <iostream>
using namespace std ;
int main () {
    int l , b , t;
    cin >> l ;
    cin >> b ; 
    t = 0 ;
    while ( l <= b ) {
        l = l*3 ;
        b = b*2 ;
        t++ ;

    }
cout <<  t ;
}