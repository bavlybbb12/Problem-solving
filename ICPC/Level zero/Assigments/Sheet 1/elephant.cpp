#include <iostream> // Made by bavly boules

using namespace std;


int main () {
    
    long long x ;
    cin >> x ;

   
    long long el = ( x / 5 ) ; // 20/5 = 4

    long long ele = ( (x - (el * 5)) / 4 ) ; // (20 - (4*5)) /4 = 0
 
    long long elep = (( x - (el * 5 ) - (ele * 4 )) / 3 ) ; // (20 - (4*5) - (0 * 4))  / 3 = 0  
  
    long long eleph = (( x - (el * 5 ) - (ele * 4) - (elep * 3) ) / 2 ) ; // (20 - (4*5) - (0 * 4) - (0 * 3)) / 2 = 0

    long long elepha = (( x - (el * 5 ) - (ele * 4) - (elep * 3) - (eleph * 2)) / 1 ) ; // (20 - (4*5) - (0 * 4) - (0 * 3) - (0 * 2)) / 1 = 0

    long long elephant = (el + ele + elep + eleph + elepha) ; // 4 + 0 + 0 + 0 + 0 = 4


    cout << elephant << endl;
    
    return 0;
}