#include <iostream>

using namespace std;

int main( )
{
int n;
cout << "ile elementow ma byæ w tablicy ? " << endl;
cin >> n;
int *tab = new int [n];
// rezerwujemy pamiêæ  dla n elementów tablicy typu int
// i adres pierwszego z tych elementów  zapamiêtujemy jako tab
cout <<"komorka w pamieci"<<tab<<endl;
for (int i=0; i<n; i++) cin >> tab[i]; // wykonujemy dzia³ania na tablicy
for (int i=0; i<n; i++) cout<< tab[i]<<" ";


//powyzsze zapisy to tkz indexowy
int *wsk=tab;//pokazuje na tablicê tab
//pokazanie apisu wskaŸnikowego w odniesieniu do tablicy
cout<<"zerowy element tablicy = "<<*wsk;


delete [] tab; // na koñcu  zwalniamy pamiêæ  przydzielon¹ na tablicê
return 0;
}
