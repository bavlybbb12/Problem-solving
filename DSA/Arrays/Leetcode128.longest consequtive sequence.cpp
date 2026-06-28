#include <iostream>
#include <vector>
#include <unordered_set>
#include <algorithm>
using namespace std;

class Solution {


    public:
    
    int longestConsecutive(vector<int>& nums) {
    
        unordered_set<int> s (nums.begin() , nums.end());
        int normal = 0;

        for (auto it : s) {

            if (s.find(it-1) == s.end()) {

                int current = it;
                int longest = 1;

                while (s.find(current+ 1) != s.end()) {
                    current+= 1;
                    longest += 1;

                }

                normal = max( normal, longest );  

            }

        }
        return normal;
    }

};