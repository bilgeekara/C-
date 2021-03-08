//İŞLEMLER/OPERATÖRLER

#include <iostream>
using namespace std;
int main()
{
    //toplama ve çıkarma operatörleri
    
    int a = 100;
    
    int b = 150;
    
    cout << a + b << endl;
    cout << b - a << endl;
    
    //çarpma , bölme ve kalan operatörleri
    
    int c =100;
    
    int d= 25;
    
    cout << c*d << endl;

    cout << c/d << endl;
    
    int e = 5;
    
    cout << d%e << endl;
    
    //attırma ve azaltma operatörleri
    int f = 5;
    f++;
    
    cout << f << endl;
    
    int y = 6;
    y++;
    
    cout << y << endl;
    
    int z;
    z = 90;
    z++;
    cout << z << endl;
    ++z;
    cout << z << endl;
    z--, //postfix gösterimi post sonra fix de ek anlamında kullanılır yani son ek
    cout << z << endl;
    z = z-1;
    cout << z << endl;
    --z; //prefix gösterimi
    cout << z << endl; //89
    
    cout << z++ << endl; // a nın değeri alınıp kullanılır sonra 1 arttırılır
    // 89 basılır ama hafızada artık 90 oldu
    
    cout << ++z << endl; // z nin değeri önce arttırılır sonra denkleme konur
    // önce arttırılıp 91 olacak sonra ekrana basılacak
    
    int x;
    x = 10;
    --x;
    x--;
    x = x-1;
    x -= 1;
    
    
    return 0;
}
