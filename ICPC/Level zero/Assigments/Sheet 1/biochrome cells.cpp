#include <iostream> // Made by bavly boules

using namespace std;

int main () {
    int N ;
    int A ;

    cin >> N ;
    cin >> A ;

    int squares = N * N ;

    int black = ( squares - A ) ;

    cout << black << endl ;

    return 0 ;
}