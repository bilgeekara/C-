//IF - ELSE - ELSE IF YAPILARI
#include <iostream>
using namespace std;
int main()
{
   int x = 35; // <= , < , > , >= , != , ==
    
   if ( x <= 40 ) { //boolean true | false
   
   cout << " x degeri 40 dan buyuktur " << endl;  
   }
   else if ( x == 25 ) { // = atama 
   cout << "x degeri 25 degerine esittir " << endl;
   }
   else if ( x == 12 ) {
   cout << " x degeri 12 degerine esittir " << endl;
   }
   else {
   cout << " x degeri 20 den buyuktur " << endl;
   } 
    
    return 0;
}
