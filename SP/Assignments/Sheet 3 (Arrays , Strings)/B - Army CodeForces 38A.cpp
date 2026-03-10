#include <iostream>
#include <vector>
using namespace std ;

int main () {

    int ranks , wait , current , wanted  ;
    cin >> ranks ;
    vector <int> waitings ;
    int counter = 0 ;


    for ( int i = 0 ; i < ranks - 1 ; i++ ) { cin >> wait ; waitings.push_back(wait) ;}

    cin >> current >> wanted ;
    current -- ;
    wanted -- ;

    for ( int i = current ; i < wanted ; i++ ) { counter += waitings [i] ; }

    cout << counter ;

}