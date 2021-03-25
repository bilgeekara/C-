//DİNAMİK HAFIZA YÖNTEMİ (MALLOC)
#include <iostream>

using namespace std;

int f(int*p){
    *p=20;
}
int main()
{
    int a[3];
    int *p= (int*)malloc(sizeof(int)*3);
    p[2] = 6;
    cout << p[2] << endl;
    int *q= (int*)malloc(sizeof(int)); //void*
    *q=40;
    f(q);
    cout << *q << endl;
   
    
}
