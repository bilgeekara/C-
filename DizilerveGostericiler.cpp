//DİZİLERİN GÖSTERİCİLER İLE KULLANILMASI

#include <iostream>
using namespace std;

int main()
{
    int x[3]= {2,4,6};
    int *p;
    p=&x[0];
    
    cout << p[2] << endl;
    cout << x[2] << endl;
    
    p[1]=8; 
    
    cout << x[1] << endl;
    
    
    
    
    
}    
