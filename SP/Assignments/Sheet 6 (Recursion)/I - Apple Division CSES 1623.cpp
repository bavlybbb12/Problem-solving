#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>

using namespace std;

long long findMinDifference( int index , long long current_sum , long long total_sum , const vector<long long>& apples ) {
    
    if ( index == apples.size() ) {
        
        long long group2_sum = total_sum - current_sum;
        return abs( group2_sum - current_sum );
    
    }

    long long diff1 = findMinDifference( index + 1 , current_sum + apples[index] , total_sum , apples );
    long long diff2 = findMinDifference( index + 1 , current_sum , total_sum , apples );

    return min(diff1, diff2);

}

int main() {
    
    int n;
    cin >> n;

    vector<long long> apples(n);
    long long total_sum = 0;

    for (int i = 0; i < n; i++) {
        cin >> apples[i];
        total_sum += apples[i];
    }

    cout << findMinDifference(0, 0, total_sum, apples) << endl;

    return 0;
}