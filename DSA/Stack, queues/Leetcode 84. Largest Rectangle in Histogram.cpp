#include <vector>
#include <stack>
#include <algorithm>

using namespace std;

class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        stack<int> st;
        int largest = 0;
        int n = heights.size();
        
        for (int i = 0; i <= n; i++) {

            int current = (i == n) ? 0 : heights[i];
            
            while (!st.empty() && current < heights[st.top()]) {
                int height = heights[st.top()];
                st.pop();

                int width = st.empty() ? i : (i - st.top() - 1);
                
                largest = max(largest, height * width);
            }
            st.push(i);
        }
        
        return largest;

    }
    
};