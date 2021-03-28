#include <iostream>
#include <time.h>
#include <cstdlib>
using namespace std;


clock_t start,stop;
double czas;

int sinia(int n)
{
    int licz=1;
    for (int i=0;i<n; i++)
    {
        licz=licz*i+1;
    }
    return licz;
}

long int sil(int liczba)
{
    if (liczba==0)
    {
        return 1;
    }
    else
    {
        return liczba*sil(liczba-1);
    }

}



int main()
{
start=clock();
for (int i=0;i<10000000;i++)
{
 sinia(20);
}
stop=clock();
czas=(double)(stop-start)/CLOCKS_PER_SEC;

cout <<"czas iteracyjny"<<czas;

start=0;
stop=0;

start=clock();
for (int i=0;i<10000000;i++)
{
 sil(20);
}
stop=clock();
czas=(double)(stop-start)/CLOCKS_PER_SEC;

cout <<endl<<"czas rekurencyjny"<<czas;


	return 0;
}
