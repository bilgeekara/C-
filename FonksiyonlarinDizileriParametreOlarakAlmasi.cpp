// Fonksiyonlarin dizileri parametre olarak almasi

#include <iostream>
using namespace std;

int f(int*p){
    p[2] = 20;
}

    
int main()
{
    int a[3]= {2,4,6};
    cout << a[2] << endl;
    f(a);
    cout << a[2] << endl;
    

    
    
}
