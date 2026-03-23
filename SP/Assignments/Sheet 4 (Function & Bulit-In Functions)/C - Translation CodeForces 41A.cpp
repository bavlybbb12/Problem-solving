#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std ;

int main () {

    string s1 , s2 ;
    cin >> s1 >> s2 ;

    reverse( s1.begin() , s1.end() ) ;

    if (s1 == s2) cout << "YES" ;
    else cout << "NO" ;

    return 0 ;
    
}