// FONKSİYONLARIN ÇAĞRILMASI VE DEĞER DÖNDÜRMESİ

#include <iostream>
using namespace std;

int f ( int x ) {
    cout << x << endl;
    return 10; // her fonksiyon çağrıldığında 10 değeri de  basılacak
}

void g ( int x) {
    cout << x + 15 << endl;
    
}
    
int main()
{
    cout << f(10) << endl; 
    cout << f(20) << endl;
    g (30);
    
  
}
