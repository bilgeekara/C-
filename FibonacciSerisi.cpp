//FIBONACCI SERİSİ

#include <iostream>
using namespace std;
int main()
{
    // 1 1 2 3 5 8 13 21 34 55 89
    // n = 9
    // 1 1 2 5 8 13 21 34
    // a b c 
    // 1 1 2
    // 2 3 5
    // 3 5 8
    // 5 8 13
    int n;
    cout << "bir sayi giriniz " << endl;
    cin >> n;
    int a = 1;
    int b = 1;
    if (n ==1 ){
        cout << 1 << endl;
    }
    else if ( n<=0) {
        
    }
    else{
        cout << a << endl << b << endl;
        for ( int i =0; i<n-2; i++) {
            int c = a+b;
            a=b;
            b=c;
            cout << c << endl;
        }
    }
    
  



    
    
    
    return 0;
}
