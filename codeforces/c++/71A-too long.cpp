#include <iostream>
using namespace std;

int main() {

    string word ;
    int trial ;
    cin >> trial ;
    for ( int i = 0 ; i <trial ; i++ ) {
        
        cin >> word ;

        if ( word.length() <= 10 ) {
            cout << word << endl ;
        }

        if ( word.length() > 10 ) {
            char first = word[0] ;
            char last = word[word.length() - 1] ;
            cout << first << word.length() - 2 << last << endl ;
        }
    }

    return 0;
}