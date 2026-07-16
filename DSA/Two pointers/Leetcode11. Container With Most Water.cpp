#include <vector>
#include <algorithm>
using namespace std;

class Solution {

    public:
    
    int maxArea(vector<int>& list) {
        int left = 0;
        int right = list.size() - 1;
        int maxx = 0;

        while (left < right) {

            int h = min(list[left], list[right]); 
            int width = right - left;

            maxx = max(maxx, h * width);

            if (list[left] < list[right]) {
                left++;
            } else {
                right--;
            }
        }
        
        return maxx;
    }
};