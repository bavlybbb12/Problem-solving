#include <vector>
#include <algorithm>
using namespace std;

class Solution {

    public:
    
    int minEatingSpeed(std::vector<int>& piles, int h) {
        
        int left = 1;
        int right = *std::max_element(piles.begin(), piles.end());
        int ans = right;

        while (left <= right) {
            
            int mid = left + (right - left) / 2;

            long long hours_spent = 0;

            for (int p : piles) hours_spent += (p + (long long)mid - 1) / mid;

            if (hours_spent <= h) {ans = mid; right = mid - 1;}
            else left = mid + 1;  
            
        }

        return ans;

    }

};