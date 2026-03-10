#include <iostream>
#include <vector>
#include <string>
using namespace std;

struct forces{
    int x;
    int y;
    int z;
};


int main() {

    int n ;
    cin >> n ;
    vector<forces> force(n) ;
    for (int i = 0; i < n; i++) {
        cin >> force[i].x >> force[i].y >> force[i].z ;
    }
    int sum_x = 0, sum_y = 0, sum_z = 0;
    for (int i = 0; i < n; i++) {
        sum_x += force[i].x ;
        sum_y += force[i].y ;
        sum_z += force[i].z ;
    }
    if (sum_x == 0 && sum_y == 0 && sum_z == 0) {
        cout << "YES" ;
    } else {
        cout << "NO" ;
    }


}