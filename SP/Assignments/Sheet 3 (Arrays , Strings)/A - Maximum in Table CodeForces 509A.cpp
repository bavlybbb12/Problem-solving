#include <iostream>
#include <string>
#include <vector>
using namespace std ;

int main () {
    
    int n ;
    cin >> n;
    vector <int> numbers ;
    
    for ( int i = 0 ; i < ( n * n ) ; i++ ) numbers.push_back(1) ;
    
    for ( int i = n  ; i < ( n * n ) ; i ++ ) {
        
        if ( i % n == 0 ) continue ;
        else{ numbers[i] = numbers [i-1] + numbers [ i - n ] ; }

    }

    cout << numbers.back() ;

}