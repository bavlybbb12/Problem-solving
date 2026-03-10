#include <iostream>
using namespace std ;
int main () {
    int n , height , level , total ;
    cin >> n ;
    level = 1 ;
    height = 0 ;
    total = 0;
    while (true) {
        int blocks = level * (level + 1) / 2 ;
        if (total + blocks > n ) break ;
        total += blocks ;
        height ++ ;
        level ++ ;
    }
    cout << height ;
}