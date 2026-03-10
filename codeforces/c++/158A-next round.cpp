#include <iostream>
#include <vector>
using namespace std;

int main () {

   vector<int> a;
   int n, k;
   cin >> n >> k;
    for (int i = 0 ; i < n ; i++ ) {

        int x ;
        cin >> x ;
        a.push_back(x);

    }
    
    int refr = a[k-1] ;
    int count = 0 ;
    
    for ( int i = 0 ; i < n ; i++ ) {
        if ( a[i] >= refr && a[i] > 0 ) {
            count++ ;
        }
    }
    cout << count << endl;
    return 0 ;
}
