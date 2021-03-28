#include <iostream>
#include <cstdlib>
#include <time.h>
using namespace std;

void losuj(int tab[])
{
    srand(time(0));

    for (int i=0;i<20;i++)
    {
        tab[i]=rand()%10+1;
    }

}

void wypisz(int tabl[])
{

     for (int i=0;i<20;i++)
    {
        cout <<tabl[i]<<endl;
    }
}

int main()
{


int losowane[20];
losuj(losowane);
wypisz(losowane);


































	return 0;
}
