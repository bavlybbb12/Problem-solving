#include <iostream> // made by Bavly321

using namespace std;

int main () {

    long long n , m ;

    cin >> n >> m ;

    if ( n > m ) {

        cout << "Alice win" << endl ;

    }

    else if ( n < m ) {

        cout << "Bob win" << endl ;

    }

    else {

        cout << "Draw" << endl ;

    }

    return 0 ;
}