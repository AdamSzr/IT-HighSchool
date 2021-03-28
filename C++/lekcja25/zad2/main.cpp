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
int suma(int tab[])
{
    int suma=0;
     for (int i=0;i<20;i++)
    {
        suma+=tab[i];
    }
    return suma;
}

void wypisz(int tabl[])
{

     for (int i=0;i<20;i++)
    {
        cout <<"index ("<<i<<") ="<<tabl[i]<<endl;
    }
}

float srednia(int suma)
{
    float sre=suma*1.0/20;
return sre;
}

int najw(int tablica[])
{
    int na=tablica[0];

     for (int i=1;i<20;i++)
    {
        if(na <tablica[i])
        {
            na=tablica[i];
        }
    }
    return na;
}

int najw2(int tab[],int &index)
{
      int na=tab[0];

     for (int i=1;i<20;i++)
    {
        if(na <tab[i])
        {
            na=tab[i];
            index=i;
        }
    }
    return na;
}
int main()
{


int losowane[20];
losuj(losowane);
wypisz(losowane);
int razem=suma(losowane);cout <<"suma "<<razem<<endl;
float sr=srednia(razem);cout <<"srednia "<<sr<<endl;
int najwiekrzaliczba=najw(losowane);cout <<"najwiekrza "<<najwiekrzaliczba<<endl;
int index=0;
int funkcja=najw2(losowane,index);
cout <<"najwiekrza "<<najwiekrzaliczba<<"index "<<index<<endl;































	return 0;
}
