#include<iostream>
#include<string>
#include<vector>
using namespace std;

int main(){
    int n ;
    cin >> n ;
    vector<string> s(n) ;
    for (int i = 0 ; i < n ; i++){
        cin >> s[i] ;
    }

    int ans = 0 ;
    for (int i = 0 ; i < n ; i ++) {
        if (s[i]=="X++" || s[i]=="++X") {
            ans++ ;
        }
        else if (s[i]=="X--" || s[i]=="--X") {
            ans-- ;
        }

    }
    cout << ans ;
}