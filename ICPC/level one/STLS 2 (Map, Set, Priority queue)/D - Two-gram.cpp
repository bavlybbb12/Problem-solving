#include <iostream>
#include <string>
#include <map>

using namespace std;

int main() {
    int n;
    cin >> n;
    string s;
    cin >> s;

    map<string, int> freq;
    int max_freq = 0;
    string best_gram = "";

    for (int i = 0; i < n - 1; i++) {
        string two_gram = s.substr(i, 2);
        freq[two_gram]++;
        
        if (freq[two_gram] > max_freq) {
            max_freq = freq[two_gram];
            best_gram = two_gram;
        }
    }

    cout << best_gram << endl;

    return 0;
}