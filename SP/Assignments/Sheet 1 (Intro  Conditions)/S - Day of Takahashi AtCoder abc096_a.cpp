#include<iostream>
using namespace std;

int main () {

    int a , b ;
    cin >> a >> b ;

    int count = 0 ;
    for ( int i = 1 ; i < a ; i ++ ) {count ++ ;}
    if ( b >= a) {count ++ ;}

    cout << count << endl ;
    return 0;
}