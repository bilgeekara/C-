// 1'den 100'e kadar olan tek sayıları bastıran kod 

#include <iostream>
using namespace std;
int main()
{
    int a=1;
    while ( a<100 ){
        cout << a << " , ";
        a += 2; // arttırma operatörü: a++ (bir arttırma)
        //eğer daha fazla arttırma istersek a += (sayı) olarak yazmamız gerekir.
        }
    cout << endl; 
    
    int b = 1;
    while ( b<100 ) {
        if (b%2==1) {
            cout << b << " , ";
        }
        b++;
    }
    cout << endl;
    
    for (int c=1 ; c<100; c++) {
        if( c%2==1) {
            cout << c << " , " ;
        }
    }
    
    
    
    return 0;
}
