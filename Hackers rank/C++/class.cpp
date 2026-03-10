#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

class student {
    
    private :
    
    int age ;
    string first_name ;
    string last_name ;
    int standard ;

    public :

    student ( int a , string f , string l , int s ) {
        age = a ;
        first_name = f ;
        last_name = l ;
        standard = s ;
    }

    int get_age () {
        return age ;
    }
    
    string get_first_name () {
        return first_name ;
    }
    
    string get_last_name () {
        return last_name ;
    }
    
    int get_standard () {
        return standard ;
    }
    
    
};

int main() {
   
    int age, standard;
    string first_name, last_name;

    cin >> age >> first_name >> last_name >> standard ;

    student s(age, first_name, last_name, standard) ;

    cout << s.get_age() << endl ;
    cout << s.get_last_name() << ", " << s.get_first_name() << endl ;
    cout << s.get_standard() << endl ;
    cout << endl ;
    cout << s.get_age() << "," << s.get_first_name() << "," << s.get_last_name() << "," << s.get_standard() << endl ;

    return 0;
}
