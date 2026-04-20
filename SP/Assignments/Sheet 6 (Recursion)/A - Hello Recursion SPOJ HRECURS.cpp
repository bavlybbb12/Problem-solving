#include <iostream>
#include <vector>
using namespace std ;

int sum ( vector <int> &a , int s = 0 ) {

    if ( s == a.size() ) return 0 ;
    return a[s] + sum(a, s + 1);

}

int main () {

    int n ;
    cin >> n ;

    for ( int i = 1 ; i <= n ; i++ ) {

        int x ;
        cin >> x ;
        vector <int> a (x) ;

        for ( int j = 0 ; j < x ; j++ )cin >> a [j];
        
        cout << "Case "<< i << ": " << sum (a) << endl ;

    }
}