#include <vector>
#include<iostream>
using namespace std;
class Solution {
public:

    vector<long long> arr ;
    long long arr[100] ;
    long long fib(int n) {

        if ( n <= 1 ) return n ;
        
        if ( arr[n] != 0 ) return arr[n] ;

        arr[n] = fib(n-2) + fib(n-1) ;
        return arr[n] ;
        
    }
};