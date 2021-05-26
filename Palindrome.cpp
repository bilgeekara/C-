//PALINDROME

// Kullanıcı tarafından verilen kelimenin palindrome olup olmadığını bulan kodu yazma
// kayak, asa, kabak, mum ...

#include <iostream>
using namespace std;

int main()
{
    cout << "Bir kelime giriniz: " << endl;
    
    char a[50]; //50 karakterlik bir boyut ayırdık
    cin >> a;
    
    char *x,*y;
    x=a; //dizginin en başından başlaması için
    y=a; /* dizginin en sonundan başlaması için bir 
     * while döngüsü atamamız gerekiyor. Döngü end of string kodunu
     * görene kadar ilerleyecek. 
     * Böylelikle y işaretçisi kelimenin en sonundan başlamış olacak */
     
while(*y!='\0') { //y'nun gösterdiği yerdeki değere bakmamız gerektiği için işaretçi kullanıyoruz
        y++;
        }
    y--; //en son eleman \0 olduğu için bir geri gelmesini sağlıyoruz
    
    bool palindrome=true; //ilk başta tüm kelimeleri palindrome kabul ediyoruz
    
    while (y>x) { //x ve y birbirine eşit olmadığı zaman (ortada karşılaşmadıklarında)
        
        if(*x!=*y) { // değerleri karşılaştırmak için işsaretçileri bu şekilde yazdık 
        palindrome=false; //eğer bir tane bile farklı eleman bulursak false döndürüyoruz
        }
        x++; //diğer harflere geçmeleri için 
        y--;
        }
    //sonuçları ekrana yansıtmak için
    if (palindrome) 
        cout << "Girilen kelime bir palindrome'dur" << endl;
    else 
        cout << "Girilen kelime bir palindrome degildir" << endl;
}
