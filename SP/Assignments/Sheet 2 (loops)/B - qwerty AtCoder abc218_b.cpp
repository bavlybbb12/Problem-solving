#include<iostream>
#include <string>
using namespace std ;
int main() {
    int n;
    int arr [26] ;
    char c = 96 ;

    for (int i = 0; i < 26 ; i++) {
        cin >> n ;
        arr [i] = n ;
    }

    for (int i = 0 ; i < 26 ; i++) { cout << char ( c + arr[i] ) ;}
}