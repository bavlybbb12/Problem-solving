#include <vector>
#include <algorithm>
#include <climits>

using namespace std;

class Solution {

    public:
    
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        
        if (nums1.size() > nums2.size()) {
            return findMedianSortedArrays(nums2, nums1);
        }
        
        int m = nums1.size();
        int n = nums2.size();
        int low = 0;
        int high = m;
        int total_left = (m + n + 1) / 2;
        
        while (low <= high) {
            
            int i = (low + high) / 2;
            int j = total_left - i;
            
            int left1 = (i > 0) ? nums1[i - 1] : INT_MIN;
            int right1 = (i < m) ? nums1[i] : INT_MAX;
            
            int left2 = (j > 0) ? nums2[j - 1] : INT_MIN;
            int right2 = (j < n) ? nums2[j] : INT_MAX;
            
            if (left1 <= right2 && left2 <= right1) {
                
                if ((m + n) % 2 == 1) return max(left1, left2);

                return (max(left1, left2) + min(right1, right2)) / 2.0;

            } 

            else if (left1 > right2) high = i - 1;
             
            else low = i + 1;

        }
        
        return 0.0;

    }

};