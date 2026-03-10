#include<iostream>
#include<vector>
#include<queue>
#include<deque>
#include<string>
#include<stack>
#include<algorithm>
using namespace std ;

int main () {
    
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int no , cards ;
    cin >> no >> cards ;
    deque <int> qu ;


    for ( int i = 0 ; i < no ; i++ ) {
        
        int number ;
        cin >> number ;
        qu.push_back(number) ;

    }

    for ( int i = 0 ; i < cards ; i++ ) { 
    
        int colour ;
        cin >> colour ;

        for ( int j = 0 ; j < qu.size() ; j++ ) {
            
            if (colour == qu[j]) {
                
                cout << j + 1 << " " ;
                int current = qu[j] ;
                qu.erase( qu.begin() + j ) ;
                qu.push_front(current) ;
                break;
            }
        
        }
    }

}