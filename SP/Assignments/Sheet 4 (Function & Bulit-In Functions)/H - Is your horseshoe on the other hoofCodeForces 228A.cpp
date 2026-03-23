#include <iostream>
#include <algorithm>
#include <vector>
using namespace std ;

int main () {

    vector <int> colours (4) ;
    int count = 0 ; 
    
    for ( int i = 0 ; i < 4 ; i ++ ) {cin >> colours [i] ;}
    
    sort ( colours.begin() , colours.end() ) ;

    for ( int i = 0 ; i < 3 ; i ++ ) {if ( colours[i] == colours[i+1] ) count ++ ;}

    cout << count ;

}