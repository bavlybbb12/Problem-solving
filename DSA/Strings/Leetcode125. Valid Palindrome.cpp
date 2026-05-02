#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

class Solution {
private:
    bool isAlphaNum(char c) {
        return (c >= 'A' && c <= 'Z') || 
               (c >= 'a' && c <= 'z') || 
               (c >= '0' && c <= '9');
    }
    
    char toLowerCase(char c) {
        if (c >= 'A' && c <= 'Z') {
            return c + 32; 
        }
        return c;
    }

public:
    bool isPalindrome(string s) {
        string clean_string = "";
        
        for (int i = 0; i < s.size(); i++) {
            if (isAlphaNum(s[i])) {
                clean_string += toLowerCase(s[i]); 
            }
        }
        
        string reversed_string = clean_string;
        reverse(reversed_string.begin(), reversed_string.end());
        
        return clean_string == reversed_string;
    }
};