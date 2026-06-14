#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
    private:

    
        void merge(vector<int>& nums, int low, int high, int mid){

            if (nums.empty()) return ;
            
            vector<int> temp;
            int i = low, j=mid+1;

            while ( i <= mid && j <= high){

                if ( nums[i] <= nums[j]) temp.push_back(nums[i++]);
                else temp.push_back(nums[j++]);
            }

            while (i <= mid) {
                temp.push_back(nums[i++]);
            }

            while (j <= high) {
                temp.push_back(nums[j++]);
            }

            for (int k = low; k <= high; k++) {
                nums[k] = temp[k - low];
            }

        }

        void mergeSort(vector<int>& nums, int low, int high){

            if (low >= high) return;
            int mid = (low + high) / 2;

            mergeSort(nums, low, mid);
            mergeSort(nums, mid + 1, high);
            merge(nums, low, high, mid);
        }

    
        public:
    
        vector<int> sortArray(vector<int>& nums) {
        mergeSort(nums, 0, nums.size() - 1);
        return nums;
    }

};