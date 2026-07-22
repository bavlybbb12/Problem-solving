#include <vector>
#include <string>
#include <algorithm>
using namespace std;

class Solution {

    public:
    
    int lengthOfLongestSubstring(string s) {
        
        vector<int> ascii_table(128, 0); 
        int i = 0;
        int max_len = 0;

        for (int j = 0; j < s.length(); j++) {
            
            while (ascii_table[s[j]] > 0) { ascii_table[s[i]]--; i++;}

            ascii_table[s[j]]++;
            max_len = max(max_len, j - i + 1);

        }

        return max_len;
    
    }

};