#include <iostream>
using namespace std;

int main () {

    int n , count ;
    cin >> n;

    count = n/5 ;
    if ( n % 5 != 0 ) {
        count ++ ;
    }

    cout << count ;

    return 0;

}