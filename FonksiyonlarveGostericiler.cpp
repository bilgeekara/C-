// Gostericilerin fonksiyonlar ile kullanilmasi

#include <iostream>
using namespace std;

//değer ile çağırma call by value

int f( int x){
    x=50;
}

//referans ile çağırma call by reference
int g(int *x,int *y,int *z){
    *x=40;
    *y=60;
    *z=50;
    return 70;
}

int main()
{
    int a =20;
    int *p;
    p=&a;
    
    f(a);
    cout << a << endl; //değer ile çağırma
    g(p);
    cout << a << endl; //referans ile çağırma
    
}
