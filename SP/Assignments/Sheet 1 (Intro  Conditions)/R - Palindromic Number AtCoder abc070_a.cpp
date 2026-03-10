#include <iostream>
using namespace std;

int main () {

    string s , n ;
    cin >> s ;

    for ( int i = s.length() - 1 ; i >= 0 ; i-- )
    {
        n = s[((s.length()-1)-i)] + n ;
    }

    if ( s == n )
    {
        cout << "Yes" << endl ;
    }
    else
    {
        cout << "No" << endl ;
    }
    
    return 0;
}