// STRING FONKSİYONU,STRCPY ve STRLEN

#include <iostream>
#include <string.h> //C Programlama Dili standart kütüphanesinde yer alan string.h başlık dosyasında karakter dizileri 
//ile ilgili fonksiyon, veri türü ve makro tanımlamaları içerir. Bu yüzden string.h kütüphanesini kodumuzun doğru 
//çalışabilmesi için eklememiz gerekir.

using namespace std;

int boyut (char *a) {
    
    int b=0;
    char c= a[0]; // 0 dan başlayalım
    while(c!='\0') { //end of string den farklı olduğu sürece yani end of stringe gelene kadar kodumuz çalışacak
        
        c=a[++b]; // döngü her çalıştığında a'in değeri bir artmış olacak
        
        }
    return b; // b de sayacımız kaça kadar sayıldığını hesaplamış olucak
    }

int main()
{
    char *a="kodlama";
    cout << a << endl;
    
    char c[8]="kodlama";
    
    cout << c << endl;
    cout << a << endl;
    cout << boyut(c) << endl;
    cout << boyut(a) << endl;
    
    cout << strlen(c) << endl; // stringlenght string in boyutunu döndürür yani boyutu bastırma ile aynı görevi yapmaktadır
    
    char *x = (char *)malloc(sizeof(char)*8); // segmentaion fault hatası verebilir o yüzden boyutunu belirlemek gerekebilir
    strcpy(x,a); // deep copy a değişkenini x'e kopyalama işlemini yapar..Yani elimizde bulunan bir 
    /*string değişkenini kopyalayarak, başka bir string değişkeni oluşturuyoruz.. Bir değişkeni kopyaladığı 
    için de iki tane değer alır. İlk girilen değer oluşacak kopya iken, ikici girilecek olan değer kopyası 
    oluşturulacak olan string değişkenidir.*/
    
    cout << x << endl;
}
//özetle bir fonksiyon sting alabilir istediğimiz stringi vererek anlattığım işlemleri yapabiliriz.
