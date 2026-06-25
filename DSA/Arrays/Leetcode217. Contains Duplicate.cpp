#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        
        vector<pair<int, int>> v;
        for (int i = 0; i < nums.size(); i++) {
            v.push_back({nums[i], i});
        }
        sort(v.begin(), v.end());
        for (int i = 0; i < v.size() - 1; i++) {
            if (v[i].first == v[i + 1].first) {
                return true;
            }
        }
        return false;
    }
};