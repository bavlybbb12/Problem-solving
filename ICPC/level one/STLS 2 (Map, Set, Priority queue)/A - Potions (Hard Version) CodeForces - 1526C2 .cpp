#include <iostream>
#include <vector>
#include <queue> 

using namespace std;

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    
    if (!(cin >> n)) return 0;

    long long health = 0; 
    int potions_drunk = 0;

    priority_queue<int, vector<int>, greater<int>> pq; 

    for (int i = 0; i < n; i++) {
        int potion;
        cin >> potion;

        health += potion;
        potions_drunk++;

        if (potion < 0) {
            pq.push(potion);
        }

        if (health < 0) {

            int worst_potion = pq.top();
            pq.pop();

            health -= worst_potion;
            potions_drunk--;
        }
    }

    cout << potions_drunk << "\n";
    return 0;
}