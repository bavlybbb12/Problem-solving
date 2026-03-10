#include <iostream>
using namespace std;
int main () {

    int a , b ;
    cin >> a >> b ;

    int mult = a * b ;
    int sum = a + b ;   
    int diff = a - b ;

    if ( mult >= sum && mult >= diff ) {
        cout << mult << endl ;
    } else if ( sum >= mult && sum >= diff ) {
        cout << sum << endl ;
    } else {
        cout << diff << endl ;
    }

    return 0 ;
}