#include <iostream>
#include <algorithm>
using namespace std;

struct zwierze{
string nazwa;
float waga;
int wiek;
string data_zak;
};


int ile=5;


void wypisz(zwierze tab[])
{
  for (int i=0;i<ile;i++)
    {
    cout <<i<<". ";

    cout<<"nazwa:"<<tab[i].nazwa;
    cout.width(15);
    cout<<" waga: "<<tab[i].waga;
    cout.width(15);
    cout<<" wiek: "<<tab[i].wiek;
    cout.width(20);
    cout<<" data zakupu: "<<tab[i].data_zak<<endl;

    }
cout <<endl;
}



void usun(zwierze tab[])
{
    int x;
    cout<<"podaj jaki index chcesz usunac zaczynajac od 0 -->";
    cin>>x;
    ile=ile-1;
    for (x;x<ile;x++)
    {
       tab[x].nazwa=tab[x+1].nazwa;
       tab[x].waga=tab[x+1].waga;
       tab[x].wiek=tab[x+1].wiek;
       tab[x].data_zak=tab[x+1].data_zak;
    }


}
void zakup(zwierze tab[])
{
int w;
cout<<"ile zwierzat chcesz wprowadzic";
cin>>w;
ile=ile+w;
for (int i=5;i<ile;i++)
{
     cin>>tab[i].nazwa;

     cin>>tab[i].waga;

     cin>>tab[i].wiek;

     cin>>tab[i].data_zak;

}


}

int main()
{

zwierze tab[25];


tab[0]={"krowa",950.4,350,"24.04.14"};
tab[1]={"swinia",129.4,542,"24.04.14"};
tab[2]={"koza",43.5,456,"23.02.15"};
tab[3]={"kura",4.2,93,"23.02.15"};
tab[4]={"pies",34.2,376,"6.05.13"};



  /*  for (int i=0;i<5;i++)
    {


    cout<<"nazwa:"<<tab[i].nazwa;
    cout.width(15);
    cout<<" waga: "<<tab[i].waga;
    cout.width(15);
    cout<<" wiek: "<<tab[i].wiek;
    cout.width(20);
    cout<<" data zakupu: "<<tab[i].data_zak<<endl;

    }*/
cout <<endl<<endl<<endl<<endl;
wypisz(tab);
//zakup(tab);
//wypisz(tab);
usun(tab);
wypisz(tab);


return 0;
}
