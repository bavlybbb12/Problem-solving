#include <iostream>
#include <string>
#include <deque>
using namespace std;

int main () {
    
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int no;
    if (!(cin >> no)) return 0;
    
    deque<int> qu;
    bool is_reversed = false;
    
    for (int i = 0; i < no; i++) {
        
        string choice;
        cin >> choice;

        if (choice == "reverse") {
            is_reversed = !is_reversed;
        }
        
        else if (choice == "push_back") {
            int n; cin >> n;
            if (!is_reversed) qu.push_back(n);
            else qu.push_front(n);
        }
        
        else if (choice == "toFront") {
            int n; cin >> n;
            if (!is_reversed) qu.push_front(n);
            else qu.push_back(n);
        }
        
        else if (choice == "back") {
            if (qu.empty()) {
                cout << "No job for Ada?\n";
            } else {
                if (!is_reversed) {
                    cout << qu.back() << "\n";
                    qu.pop_back();
                } else {
                    cout << qu.front() << "\n";
                    qu.pop_front();
                }
            }
        }
        
        else if (choice == "front") {
            if (qu.empty()) {
                cout << "No job for Ada?\n";
            } else {
                if (!is_reversed) {
                    cout << qu.front() << "\n";
                    qu.pop_front();
                } else {
                    cout << qu.back() << "\n";
                    qu.pop_back();
                }
            }
        }
    }
    return 0;
}