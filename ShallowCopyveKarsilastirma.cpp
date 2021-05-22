#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    
    char *b= "kodlama";
    cout << b << endl;
    
    char a[8]= "kodlama" ;
    cout << a << endl;
    b=a;
    b[2]='x';
    cout << a << endl;
    
    if(strcmp(b,a)==0) {
        cout << "aynilar" << endl;
        }
    else {
        cout << " ayni degiller" << endl;
        }
}
