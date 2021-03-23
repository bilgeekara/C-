//DİZİLER

#include <iostream>
using namespace std;

int main()
{
    int a[5]={ 2,4,6,8,10};
    cout << a[3] << endl;
    cout << a[0] + a[1] << endl;
    
    a[2]=12;
    cout << a[2] << endl;
    for ( int i=0; i<5; i++){
        cout << a[i] << endl;
    }
    
    int b[4];
    b[0]= 5;
    b[1]= 10;
    b[2]= 15;
    cin >> b[3];
    for ( int i=0; i<4; i++){
        cout << b[i] << endl;
    }
}
