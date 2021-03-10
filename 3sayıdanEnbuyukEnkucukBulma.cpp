// 3 SAYIDAN EN BÜYÜK VE EN KÜÇÜĞÜNÜ BULMA
#include <iostream>
using namespace std;
int main()
{
    int x,y,z;
    
    cout << "birinci sayiyi giriniz. " << endl;
    cin >> x;
    
    cout << "ikinci sayiyi giriniz. " << endl;
    cin >> y;
    
    cout << "ucuncu sayiyi giriniz. " << endl;
    cin >> z;
    
    int enbuyuk = x;
    
    if ( y > enbuyuk ) {
        enbuyuk=y;
        }
    if ( z > enbuyuk ) {
        enbuyuk=z;
        }
        
    int enkucuk = x;
    
    if ( y < enkucuk ) {
        enkucuk=y;
        }
    if ( z < enkucuk) {
        enkucuk=z;
        }
        cout << " en buyuk sayi:" << enbuyuk;
        cout << " en kucuk sayi:" << enkucuk;
        
    return 0;
}
