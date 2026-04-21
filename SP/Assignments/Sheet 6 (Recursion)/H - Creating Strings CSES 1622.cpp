#include <iostream>
#include <string>
#include <vector>

using namespace std;

void generateStrings(int n, string current, vector<int>& charCount, vector<string>& results) {
    
    if (current.size() == n) {
        
        results.push_back(current);
        return;

    }
    
    for (int i = 0; i < 26; i++) {
        
        if (charCount[i] > 0) {
            
            charCount[i]--;
            generateStrings(n, current + char('a' + i), charCount, results);
            charCount[i]++;

        }
    
    }

}

int main() {
    
    string s;
    cin >> s;
    
    vector<int> charCount(26, 0);
    
    for (char c : s) charCount[c - 'a']++;
    
    vector<string> results;
    string current_string = "" ;
    
    generateStrings( s.size() , current_string , charCount , results );
    
    cout << results.size() << endl;
    
    for (const string& res : results) cout << res << endl;
    
    return 0;
    
}