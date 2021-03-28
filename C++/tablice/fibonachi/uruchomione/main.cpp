#include <iostream>

using namespace std;

int main()
{
	int ile; 			         	// deklaracja zmiennej 
	cout << "ile chcesz wyrazow ";

	cin >>ile; 			        	// wpisywanie do zmiennej (potrzebna do wielkosci tablicy oraz pêtli for)
	
	int tab[ile]; 		        	//deklaracja tablicy 
	
	tab[0]=1; 	tab[1]=1;  		   // deklaracja w tablicy 2 pierwszych zmiennych jako 1
	for (int x=0;x<ile;x++)
    {
        tab[x+2]=tab[x]+tab[x+1];  // zapisywanie nadtêpnej liczby w tabeli poprzez dodanie 2 ostatnich
    }

	for (int z=0;z<ile;z++)
    {
        cout <<" "<<tab[z];        //wyswietlanie na ekran liczb z tabeli
    }


	return 0;
}

