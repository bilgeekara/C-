//WHILE

#include <iostream>
using namespace std;
int main(){
    int a = 1;
    while ( a < 25 ) {
        cout << "merhaba" << endl;
        a++; //adım değeri
    }
    
    return 0;
}



// FOR 

#include <iostream>
using namespace std;
int main(){
    for (int b = 1; b<25 ; b++) {
        cout << "nasilsiniz?" << endl;
        cout << b << endl;
    }
    
    
    return 0;
}


// DO WHILE

#include <iostream>
using namespace std;
int main(){
    int c = 1;
    do{
        cout << "Bilge" << endl;
        c++;
        cout << c << endl;
    } while ( c<10);
    
  
    return 0;
}
