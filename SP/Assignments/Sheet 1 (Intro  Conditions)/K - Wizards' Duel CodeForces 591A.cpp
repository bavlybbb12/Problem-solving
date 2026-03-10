#include <iostream>
using namespace std ;

int main () {

    float l , s1 , s2 , d ;
    cin >> l ;
    cin >> s1 ;
    cin >> s2 ;

    d = l * s1 / ( s1 + s2 ) ;
    cout << d ;
  

    return 0 ;
}