#include <iostream>
#include <vector>
#include <algorithm> 
#include <list>
#include <string>
using namespace std;

int main() {

    int t ;
    cin >> t ;

    while ( t-- ) {
        int n ;
        cin >> n ;

        vector<int> s(n) ;
        for ( int i = 0 ; i < n ; i++ ) {
            cin >> s[i] ;
        }

        vector<int> f(n);
        for ( int i = 0 ; i < n ; i++ ) {
            cin >> f[i];
        }

        for ( int i = 0 ; i < n ; i++) {
            int start_time ;
            
            if ( i == 0 ) {
                
                start_time = s[i] ;

            } else {
  
                start_time = max( s[i] , f[i-1] ) ;
            }

            int duration = f[i] - start_time;
            cout << duration << " " ;
        }
        
        cout << "\n" ;
    }

    return 0 ;
}