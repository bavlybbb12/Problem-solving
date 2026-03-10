#include <iostream>
#include <vector>
using namespace std;

int main() {
    
    int length;
    cin >> length;
    vector<int> magnets(length);

    for (int i = 0; i < length; i++) {
        cin >> magnets[i];
    }

    int counter = 1;

    for (int i = 0; i < length - 1; i++) {
        if (magnets[i] != magnets[i+1]) {
            counter++;
        }
    }

    cout << counter << "\n";
    
    return 0;
}