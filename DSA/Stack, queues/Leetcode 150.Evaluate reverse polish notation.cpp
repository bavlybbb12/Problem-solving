#include <iostream>
#include <stack>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

class Solution {

    public:
    
    int evalRPN(vector<string>& tokens) {
        
        stack<int>nums;
        int res = 0;
        
        for (auto el:tokens){

            if (el == "+" ){
                
                int el2 = nums.top();
                nums.pop();
                int el1 = nums.top();
                nums.pop();
                nums.push( el1 + el2 ); 

            }

            else if (el == "*" ){

                int el2 = nums.top();
                nums.pop();
                int el1 = nums.top();
                nums.pop();
                nums.push( el1 * el2 ); 

            }

            else if (el == "-" ){

                int el2 = nums.top();
                nums.pop();
                int el1 = nums.top();
                nums.pop();
                nums.push( el1 - el2 ); 

            }

            else if (el == "/" ){

                int el2 = nums.top();
                nums.pop();
                int el1 = nums.top();
                nums.pop();
                nums.push( el1 / el2 ); 

            }

            else {nums.push(stoi(el));}

        }

        return nums.top();

    }
    
};