#include <iostream>
#include <algorithm>
#include <cmath>
#include<vector>
using namespace std ;

int main () {

    int number ;
    cin >> number ;
    string s ;
    cin >> s ;
    int counter = 0 ;

    for ( int i = 0 ; i < s.size() - 1 ; i ++ ) {if ( s[i] == s[i+1] ) counter ++ ;}

    cout << counter ;
    
}