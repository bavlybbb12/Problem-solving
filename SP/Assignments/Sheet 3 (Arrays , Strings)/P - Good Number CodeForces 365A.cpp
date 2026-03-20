#include <iostream>
#include <string>

using namespace std;

int main() {
   
    int n , k;
    cin >> n >> k;
    int counter = 0;

    for (int i = 0; i < n; i++) {
        string s;
        cin >> s;

        bool is_k_good = true; 

        for (int i = 0; i <= k; i++) {

            char target_char = '0' + i;

            if (s.find(target_char) == string::npos) {
                is_k_good = false;
                break; 
            }
        }

        if (is_k_good) {
            counter++;
        }
    }

    cout << counter << endl;

    return 0;
}