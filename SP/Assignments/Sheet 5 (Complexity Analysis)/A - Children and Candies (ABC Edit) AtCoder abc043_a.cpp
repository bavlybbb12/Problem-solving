#include <iostream> 
using namespace std;

int main() {
    long long n;
    cin >> n;
    
    long long count = n * (n + 1) / 2;
    
    cout << count << endl;
    return 0;
}