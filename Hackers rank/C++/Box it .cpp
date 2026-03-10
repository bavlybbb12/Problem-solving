#include <iostream>
#include <string>
using namespace std ;

class box {
    
    private :
    int l , b , h ;

    public :

    box ( int length , int breadth , int height ) {

        l = length ;
        b = breadth ;
        h = height ;
        l = 0 ;
        b = 0 ;
        h = 0 ;

    }

    int getlenght() {
        return l ;
    }
    int getbreadth() {
        return b ;
    }
    int getheight() {
        return h ;
    }
    long long CalculateVolume() {
        return l * b * h ;
    }

};