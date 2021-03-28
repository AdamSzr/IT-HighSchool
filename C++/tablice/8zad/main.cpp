#include <iostream>
#include <cstdlib>
#include <time.h>

int ilosc;

int przesuniecie;

using namespace std;
int main()
{
	srand(time(0));


	cout<< "podaj ile liczb wylosować i wstawic do tablicy ";
	cin>>ilosc;

	cout<< "podaj o ileprzesunąc w  lewą stronę ";
	cin>>przesuniecie;


	int liczby[ilosc];

	for( int i=0; i<ilosc; i++ ) // losowanie
    {
        liczby[i]=rand()%11+10;
        cout<<liczby[i]<<"    ";
    }








	int dopomocy;
	for (int i=0; i<przesuniecie; i++)//obrót pęlti= 1 miejsce w lewo
    {
    dopomocy=liczby[0];
        for (int z=0; z<ilosc-1; z++) //przesuwanie w lewo
        {
            liczby[z]=liczby[z+1];
        }
    liczby[ilosc-1]=dopomocy;
    }


 cout<<endl;





	for (int i=0; i<ilosc;i++)
    {
        cout<<liczby[i]<<"    ";
    }















	return 0;
}
