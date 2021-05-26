// Dosya İşlemlerine Giriş 
// Dosya işlemleri için fstream kütüphanesinde yer alan ifstream ve ofstream sınıfları kullanılır.
#include <iostream>
#include <fstream>
using namespace std;


int main()
{
   //dosyayı yazma 
   ofstream dosya; // dosya göstericisi değişkenini yazarak ve ofstream dosya diyerek (out file stream) aslında o dosyayı açtığımızı ve içine bir 
   //şeyler yazacağımızı belirtmiş oluyoruz. 
   dosya.open ("TeknoKozmos.txt"); // hangi dosyanın olduğunu belirtiyoruz string olarak dosyanın adını yazıyoruz
   
   if(dosya.is_open()){ //dosyanın açılabilirliğini kontrol eder ve sorun yoksa aşağıdaki kodları çalıştırır.
       dosya << "kodlama /n"; //burda dosyaya yönlendirme yapıyoruz ve daha önce cout ile ekranda yazdırıyorduk burda ise bu şekilde dosyaya yazıdırıyoruz.
       dosya.close(); // işimiz bitincede dosyayı kapatmamız gerekiyor çünkü yazma işlemimiz gerçekleşmeyebilir.İşletim sistemi veya C++ geciktirebilir.
       }
       else {
           
           cout << "dosya acilmiyor" << endl;
           }
           
    //dosyayı okuma 
    string satir;
    
    ifstream dosya2 ("TeknoKozmos.txt"); //bir dosyayı okurken de ifstream (input file stream) diyerek de dosyayı okuyuyoruz yani dosya göstericisi ile dosyayı açıyoruz.
    if (dosya2.is_open()) { // dosya başarılı bir şekilde açılırsa aşağıdaki işlemler gerçekleşir.
        
        while (getline(dosya2, satir)) { // getline fstream kaynaklı bir koddur.Burda da dosya2 den tanımlı string i kullanarak bir satır okunmasını sağladık
            
            cout << satir << endl; //tek tek satırları okuyacak ve okuduklarını da end of line ile ekrana yazacak
            }
        dosya2.close();
        }
}
