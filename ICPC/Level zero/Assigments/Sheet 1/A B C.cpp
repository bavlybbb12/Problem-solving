#include <iostream> // Made by bavly boules

using namespace std;

int main () {

    int A , B , C , x , y , z ;
    A = x ;
    B = y ;
    C = z ;

    cin >> x >> y >> z ;

    A = y ;
    B = x ;

    A = z ;
    C = y ;

    cout << A << " " << B << " " << C << endl ;

    return 0 ;
}