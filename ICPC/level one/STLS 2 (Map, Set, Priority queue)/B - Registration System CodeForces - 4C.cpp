#include <iostream>
#include <string>
#include <map>

using namespace std;

int main() {
    int n;
    cin >> n;
    
    map<string, int> database;
    
    for (int i = 0; i < n; i++) {
        string name;
        cin >> name;
        
        if (database.count(name) == 0) {
            cout << "OK\n";
            database[name] = 1;
        } else {
            cout << name << database[name] << "\n";
            database[name]++;
        }
    }
    
    return 0;
}