// RANDOM NUMBER

#include <iostream>
#include <ctime>

using namespace std;
int main()
{
    int rn ;
    srand(time(NULL));
    rn = rand()%6+1;
    cout << rn << endl;
   

}
