// Break - Continue komutlari

#include <iostream>
using namespace std;
int main()
{
    //break komutu
    for (int a = 0; a < 20; a++ ) {
        if (a==10){
            break;
        }
        cout << a << endl;
    }
    
   
    
    //continue komutu
    for (int b = 0; b < 20; b++ ) {
        if (b==10){
            continue;
        }
        cout << b << endl;
    }
    
     
    
    
    
    
    
    return 0;
}
