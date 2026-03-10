#include <iostream>

using namespace std;

int main () {

    int f, l , no , steps , div ;   // first , last ( divisor mabenhom el code yeshta8al fel range da bas )
    cin >> f >> l >> no ;
    steps =  ( f ) ;
    div = 0 ;

    while ( steps <= l ) {

        if ( no % steps == 0 ) {

            div ++ ;

        }

        steps ++ ;

    }

    if ( div == 0 ) {
        cout << " " ;
    }

    cout << div ;
    return 0;

}