#include <iostream>
#include <fstream>
#include <time.h>
#include <cstdlib>

using namespace std;

int main()
{
    srand(time(NULL));
    fstream plik;

    plik.open("plik.txt",ios::out);
    for(int i=0;i<432;i++)
    {
       plik<<rand()%9999+1;
       plik<<"\n";
    }


    plik.close();



    return 0;
}
