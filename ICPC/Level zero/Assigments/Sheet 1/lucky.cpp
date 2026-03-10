#include <iostream> // made by bavly321

using namespace std ;

int main () {

    long long n1 ;

    cin >> n1 ;

    long long n = ( n1 % 100 + n1 / 100 ) ;

    if (n % 4 == 0 || n % 7 == 0) {

        cout << "Lucky" << endl ;

    }

    else {

        cout << "Not Lucky" << endl ;

    }
    return 0 ;
}