#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

class Solution {
public:
    string encode(vector<string>& strs) {
        string encoded = "";
        
        for (const string& word : strs) {
            for (char c : word) {

                encoded += to_string(static_cast<int>(c)) + ","; 
            }

            encoded += "/"; 
        }
        return encoded;
    }

    vector<string> decode(string s) {
        vector<string> decoded;
        string current_word = "";
        string current_ascii = "";

        for (char c : s) {
            if (c == ',') {

                if (!current_ascii.empty()) {
                    int ascii_val = stoi(current_ascii);
                    current_word += static_cast<char>(ascii_val);
                    current_ascii = "";
                }
            } 
            else if (c == '/') {
                
                decoded.push_back(current_word);
                current_word = "";
                
            } 
            else {current_ascii += c;}
        }

        return decoded;
    }
};
