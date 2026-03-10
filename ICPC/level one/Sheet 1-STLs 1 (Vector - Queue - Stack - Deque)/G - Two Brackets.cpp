#include <iostream>
#include <string>
using namespace std;

int main() {
    int trials;
    cin >> trials;

    for (int i = 0; i < trials; i++) {
        string s;
        cin >> s;

        int open_round = 0;  
        int open_square = 0;  
        int total_moves = 0;  

       
        for (int j = 0; j < s.size(); j++) {
            
            if (s[j] == '(') {
                open_round++;
            } 
            else if (s[j] == '[') {
                open_square++;
            } 
            else if (s[j] == ')') {
                
                if (open_round > 0) {
                    open_round--; 
                    total_moves++; 
                }
            } 
            else if (s[j] == ']') {
                
                if (open_square > 0) {
                    open_square--; 
                    total_moves++; 
                }
            }
        }

        cout << total_moves << "\n";
    }

    return 0;
}