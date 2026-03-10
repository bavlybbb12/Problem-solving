#include <iostream>
using namespace std;
int main() {

    float v , t1 , t2 , d , realt ;
    cin >> v >> t1 >> t2 >> d ;
    realt = d / v ;
    if ( realt >= t1 && realt <= t2 ) {
        cout << "No" ;
    } else {
        cout << "Yes" ;
    }

    // vf = vi + at
    // 2ad = vf^2 - vi^2
    // d = vit + (at^2)/2
    // v = d / t
}