#include <iostream>
using namespace std;

struct details {
    string fname ;
    int age ;
    int standard ;
    string lname ;

};

int main () {

    details d;
    
    cin >> d.age ;
    cin >> d.fname ;
    cin >> d.lname ;
    cin >> d.standard ;

    cout << d.age << " " << d.fname << " " << d.lname << " " << d.standard ;

}