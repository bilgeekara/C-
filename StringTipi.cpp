#include <iostream>
#include <stdlib.h>
#include <string.h>

using namespace std;

int main()
{
    string x; //string gelişmiş bir değişken tipidir. iceriği değiştirilemez.
    char *y= "tekno";
    char z[8]= "tekno";
    x = y; //string tipinde tanımlanan bir değişken, bir işaretçiye eşitlenebiliyor
    
    cout << x.size() << endl; 
    //string tipi kullanıldığı zaman "x." diyerek string'in herhangi bir özelliğini çağırabiliriz. Burda da x.size diyrerek boyutunu çağırdık
     
    x.append(" kozmos") ; // string ile değerin yanına mesaj ekleyebiliriz.
    cout << x << endl;
    
    cout << x.substr(3,6) << endl; //  substr sayesinde metinden belirlediğimiz elemanları ekranda bastırabiliriz.
    
 
    return 0;
}
