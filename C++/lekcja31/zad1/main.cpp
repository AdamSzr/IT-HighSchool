#include <iostream>
#include <cstdlib>
#include <math.h>
using namespace std;





int main()
{
int ile;
int plecak;
int wynik=0;
cout <<"Podaj ilosc przedmiotow ";
cin>>ile;
cout <<endl<<"Podaj maksymalna wage plecaka";
cin>>plecak;


int wartosc[ile]={8,3,1,2,1};
int waga[ile]={4,2,1,3,7};
int k[ile]; //tablica z nr spakownych przedmiotów
//cout <<"Wpiszuj przedmioty, kolenjo : NAZWA WARTOSC WAGA"<<endl;
/*for (int i=0;i<ile;i++)
{

        cin>>wartosc[i];
        cin>>waga[i];

}*/
if (plecak<0)
{
    cout <<"bledne watosci !"; return 0;
}




for (int i=0;i<ile;i++)
{
if (waga[i]<=plecak)  // jesli przedmiot miesci sie w plecaku to :
{
    k[i]=1;
    plecak=plecak-waga[i];
    wynik=wynik+wartosc[i];
}
else
{
    k[i]=0;
}
}
cout <<"Wartosc spakowanego plecaka = "<<wynik<<endl;
cout<<"spakowano rzeczy o indexach :"   ;
for (int w=0;w<ile;w++)
{
    if (k[w]==1)
    {
        cout<<w+1<<" ";
    }

}



    return 0;
}
