#include <vector>
using namespace std;

class Solution {

    public:
    int trap(vector<int>& list) {
        
        if (list.empty()) return 0;

        int left = 0;
        int right = list.size() - 1;
        int max_left = list[left];
        int max_right = list[right];
        int ans = 0;

        while (left < right) {
            
            if (max_left < max_right) {
                
                left++;

                if (list[left] >= max_left) max_left = list[left];
                
                else ans += max_left - list[left];
                

            } 
            else {
                
                right--;

                if (list[right] >= max_right) max_right = list[right];

                else ans += max_right - list[right];
            
            }
        
        }

        return ans;
    
    }

};