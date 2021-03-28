#include <iostream>
#include <time.h>
#include <cstdlib>
using namespace std;


clock_t start,stop;
double czas;


long int potega(int a, int b)
{
    int pote=1;
    for (int w=0; w<b ;w++)
    {
        pote=pote*a;
    }
return pote;
}

 long int rekr(int a, int b)
{

    if (b==0)
    {
        return 1;
    }
    else return a*rekr(a,b-1);
return a;
}

int main()
{



start=clock();
for (int i=0;i<10000000;i++)
{
    potega(6,10);
}

stop=clock();
czas=(double)(stop-start)/CLOCKS_PER_SEC;
start=0;
stop=0;

cout <<"czas iteracyjny"<<czas;

start=clock();
for (int i=0;i<10000000;i++)
{
    rekr(6,10);
}

stop=clock();
czas=(double)(stop-start)/CLOCKS_PER_SEC;

cout <<endl<<"czas rekurencyjny"<<czas;



	return 0;
}
