#include <iostream>
#include <vector>
using namespace std;

class KthLargest {
private:
    struct Heap {
        int capacity;
        vector<int> arr;

        Heap(int k) {
            capacity = k;
            arr.reserve(k);
        }

        void heapify(int i) {
            int smallest = i;
            int left = 2 * i + 1;
            int right = 2 * i + 2;

            if (left < arr.size() && arr[left] < arr[smallest]) smallest = left;
            if (right < arr.size() && arr[right] < arr[smallest]) smallest = right;

            if (smallest != i) {
                swap(arr[i], arr[smallest]);
                heapify(smallest);
            }
        }
        
        void insert(int val) {
            if (arr.size() < capacity) {
                arr.push_back(val);
                int i = arr.size() - 1;
                while (i > 0 && arr[i] < arr[(i - 1) / 2]) {
                    swap(arr[i], arr[(i - 1) / 2]);
                    i = (i - 1) / 2;
                }
            }
            else if (val > arr[0]) {
                arr[0] = val;
                heapify(0);
            }
        }

        int getMin() {
            return arr[0];
        }
    };

    Heap myHeap;

public:
    KthLargest(int k, vector<int>& nums) : myHeap(k) {
        for (int num : nums) {
            myHeap.insert(num);
        }
    }
    
    int add(int val) {
        myHeap.insert(val);
        return myHeap.getMin();
    }
};