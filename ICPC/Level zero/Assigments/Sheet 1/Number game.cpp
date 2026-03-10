#include <iostream> // made by bavly321

using namespace std;

int main () {

    long long n ;
    cin >> n ;

    if ( n % 2 == 0 && n % 4 == 0 ) {

        cout << "Ali wins" << endl ;

    }
    
    else if ( n % 2 != 0 && n % 5 == 0 ) {

        cout << "Asem wins" << endl ;
    }

    else {

        cout << "No one wins" << endl ;
    }

    return 0 ;
}