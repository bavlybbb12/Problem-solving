#include <iostream>
#include <string>
#include <vector>
using namespace std ;

int main() {

    int trials ;
    cin >> trials ;

    for (int i = 0 ; i < trials ; i++) {

        int days ;
        cin >> days ;
        vector <int> prices (days);
        int lowest = 0;
        int counter = 0; 

        for ( int j = 0 ; j < days ; j++  ) cin >> prices[j] ; 
        
        lowest = prices [prices.size() - 1] ;

        for ( int j = prices.size() - 1 ; j >= 0 ; j-- ) {

            if ( prices[j] > lowest ) { counter ++ ;}

            else { lowest = prices[j] ;}

        }

        cout << counter << "\n" ;

    }

}