#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int count1 = 0, count2 = 0, count3 = 0, count4 = 0;

    for (int i = 0; i < n; i++) {
        int s;
        cin >> s;
        if (s == 1) count1++;
        else if (s == 2) count2++;
        else if (s == 3) count3++;
        else count4++;
    }

    int cars = count4; 

    int match = min(count3, count1);
    cars += count3; 
    count1 -= match;

    cars += count2 / 2;
    
    if (count2 % 2) {
        cars++; 
        count1 -= min(2, count1); 
    }

    if (count1 > 0) {
        cars += (count1 + 3) / 4; 
    }

    cout << cars << endl;
    
    return 0;

}