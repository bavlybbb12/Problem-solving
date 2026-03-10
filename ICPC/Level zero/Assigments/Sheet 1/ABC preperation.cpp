#include <iostream> // made by bavly321

using namespace std ;

int main () {

    long long in1 ; //100
    long long in2 ; //200
    long long in3 ; //300
    long long in4 ; //400

    cin >> in1 >> in2 >> in3 >> in4 ;

    if ( in1 <= in2  && in1 <= in3 && in1 <= in4 ) {

        cout << in1 << endl ;

    }

    else if ( in2 <= in1 && in2 <= in3 && in2 <= in4 ) {
        cout << in2 << endl ;

    }

     else if ( in3 <= in1 && in3 <= in2 && in3 <= in4 ) {

        cout << in3 << endl ;

    }
    else if ( in4 <= in1 && in4 <= in2 && in4 <= in3 ) {

        cout << in4 << endl ;

    }

    return 0 ;
    
}