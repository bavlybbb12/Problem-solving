#include <iostream>
#include <queue>
#include <algorithm>
#include <string>
#include <vector>
using namespace std ;
int main () {
    
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n ; 
    cin >> n ;

    queue <int> qu ;

    for ( int i = 0 ; i < n ; i++ ) {

        int choice ;
        cin >> choice ;

        if ( choice == 1 ) {
            int no ;
            cin >> no ;
            qu.push (no) ;
        }

        else if ( choice == 2 ) {
            if ( qu.empty() == true ) { continue ; }
            else { qu.pop() ; }
        }

        else if ( choice == 3 ) { 
            if ( qu.empty() == true ) {cout << "Empty!" << "\n"; }
            else { cout << qu.front() << "\n" ;}

    }

    }
}