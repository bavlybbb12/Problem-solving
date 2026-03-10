#include <iostream>

using namespace std;

int main () {

    int steps , start ;
    start = 0 ;

    cin >> steps ;

    while (start <= steps ) {
        int letters ;
        cin >> letters ;
        
        string name [letters] ;
        cin >> name ;
        
        if (letters <=5  ) {

            cout << "YES" << endl ;
        }
        else {
            cout << "NO" << endl ;
        }
        
        start++ ;
    } 
    return 0 ;
}