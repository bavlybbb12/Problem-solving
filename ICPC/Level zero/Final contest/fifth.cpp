#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <list>
using namespace std ;

int main() {

    int t ;
    cin >> t ;

    while (t--) {
        int n ;
        cin >> n ;

        long long a[55] ; 

        for ( int i = 0; i < n ; i++ ) {
            cin >> a[i] ;
        }

        sort(a, a + n) ;

        long long current_val = a[0] ;

        for (int i = 1; i < n; i++) {
           
            current_val = (current_val + a[i]) / 2 ;
        }

        cout << current_val << "\n" ;
    }

    return 0;
}