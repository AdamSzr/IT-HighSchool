#include <iostream>

using namespace std;

int main( )
{
int n;
cout << "ile elementow ma by� w tablicy ? " << endl;
cin >> n;
int *tab = new int [n];
// rezerwujemy pami��  dla n element�w tablicy typu int
// i adres pierwszego z tych element�w  zapami�tujemy jako tab
cout <<"komorka w pamieci"<<tab<<endl;
for (int i=0; i<n; i++) cin >> tab[i]; // wykonujemy dzia�ania na tablicy
for (int i=0; i<n; i++) cout<< tab[i]<<" ";


//powyzsze zapisy to tkz indexowy
int *wsk=tab;//pokazuje na tablic� tab
//pokazanie apisu wska�nikowego w odniesieniu do tablicy
cout<<endl<<"zerowy element tablicy = "<<*wsk<<endl;
cout<<"pierwszy  element tablicy = "<<*(wsk+1);

cout <<endl<<endl<<endl<<endl;



wsk=tab;
for (int i=0;i<n;i++,wsk++)
{
    cout<<"element w tablicy" <<*wsk<<endl;
}

delete [] tab; // na ko�cu  zwalniamy pami��  przydzielon� na tablic�
return 0;
}
