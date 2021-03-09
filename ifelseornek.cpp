// IF - ELSE ÖRNEK
#include <iostream>
using namespace std;

int main(){
    int ort;
    cout << " Vize Final ortalaminizi giriniz: " << endl;
    cin >> ort;
    if ( ort > 90 ) {
        cout << " AA ile gectiniz" << endl;
    }
    else if ( ort > 70 ) {
        cout << "BB ile gectiniz" << endl;
    }
    else if ( ort > 50 ) {
        cout << " CC ile gectiniz" << endl;
    }
    else{
        cout << "Maalesef kaldiniz" << endl;
    }
    
    return 0;
}
