#include <iostream>

using namespace std;



int main()
{

int i=12; // deklaracja zmiennej i
int *wsk_i=&i; //ustawiamy wskaźnik na zmienną i
float f=3.52;
float *wsk_f=&f; //ustawiamy wskaźnik  na zmienną f
string st="Programowanie";
string *wsk_st=&st; //ustawiamy wskaźnik na zmienną st

int rozmiar=sizeof(wsk_i);
int rozmiar1=sizeof(i);
cout << "wartosc zmiennej 'i' wypisany w sposob zwykly = "<<i<<"wartosc zmiennej 'i' wypisany w sposob wskaznikowy "<< *wsk_i<< "rozmiar zmiennej ="<<rozmiar1<<" rozmiar wskaznika ="<<rozmiar<<endl;


rozmiar=sizeof(wsk_f);
rozmiar1=sizeof(f);
cout << "wartosc zmiennej 'f' wypisany w sposob zwykly = "<<f <<"wartosc zmiennej 'f' wypisany w sposob wskaznikowy "<< *wsk_f<<" rozmiar zmiennej ="<<rozmiar1<<" rozmiar wskaznika ="<<rozmiar<<endl;

rozmiar=sizeof(*wsk_st);
rozmiar1=sizeof(st);
cout << "wartosc zmiennej 'st' wypisany w sposob zwykly = "<<st <<"wartosc zmiennej 'st' wypisany w sposob wskaznikowy "<< *wsk_st<<" rozmiar zmiennej ="<<rozmiar1<<" rozmiar wskaznika ="<<rozmiar<<endl;

//Wniosek :
// zarówno zmienna jak i wskaźnik zajmują tyle samo miejsca w pamięci komputera


	return 0;
}
