// ZAR OYUNU

#include <iostream>
#include <ctime>
using namespace std;
int main()
{
    cout << "kac zar atilacagini giriniz" << endl;
    int n;
    cin >> n;
    srand(time(NULL));
    int skor=0; //sonucu belirlemek için değişken ataması yapıyoruz.
    int a[n];
    int b[n]; // zar değerlerinin tutulması için gerekli
    for (int i=0; i<n; i++){
        int x1 = rand()%6 + 1;
        int x2 = rand()%6 + 1;
        a[i] = x1;
        b[i] = x2;
        if(x1>x2){
            skor++;
            }
        else if (x2>x1) {
            skor--;
            }
    }
    for ( int i=0; i<n; i++){
        cout << a[i] << " " ;
    }
    cout << endl;
    
    for ( int i=0; i<n; i++){
        cout << b[i] << " " ;
        
    }
    cout << endl;
    if (skor>0){
        cout << " birinci kullanici kazandi" << endl;
    }
    else if (skor<0) {
        cout << "ikinci kullanici kazandi" << endl;
    }
    else{
        cout << " oyun berabere" << endl;
    }
}
