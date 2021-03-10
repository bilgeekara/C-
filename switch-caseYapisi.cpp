// SWITCH - CASE YAPISI
#include <iostream>
using namespace std;
int main(){
    int a = 10 ;
    switch (a) {
        case 5 : cout << " sayi 5'e esittir. " << endl;
        break;
        case 10 : cout << " sayi 10'e esittir. " << endl;
        break;
    }
    
    int b;
    cout << " lutfen bir sayi giriniz." << endl;
    cin >> b;
    switch(b) {
        case 5:{
            cout << " sayi 5'e esittir." << endl;
            }
            
        case 10 : {
            cout << " sayi 10'e esittir." << endl;
            }
            break;
        case 15: {
            cout << " sayi 15'e esittir." << endl;
            }
            break;
            default: {
                cout << " sayi 5, 10 ve 15 ' e esit degildir." << endl;
                }
        
    }

    return 0;
}
