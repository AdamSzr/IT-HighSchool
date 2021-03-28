#include <iostream>
#include <fstream>
#include <cstdlib>
#include <time.h>
using namespace std;

int liczba, nr_linii=1, licznik=0, ile;
string imie, nazwisko, wiersz;

int main()
{
	fstream plik;
	plik.open("dane.txt", ios::out | ios::app);
	srand(time(NULL));
	liczba = rand()%101+100;
	plik << liczba << endl;
	ile = liczba;
	for(int i=0; i<ile; i++)
	{
		liczba = rand()%1001+1000;
		plik << liczba << endl;
	}
	
	cout << "Podaj imie: ";
	cin >> imie;
	cout << "Podaj nazwisko: ";
	cin >> nazwisko;
	
	plik << imie << endl;
	plik << nazwisko << endl;
	
	plik.close();
	
	plik.open("dane.txt", ios::in);
	while(getline(plik, wiersz))
	{
		if(wiersz != imie && wiersz != nazwisko)
		{
			liczba = atoi(wiersz.c_str());
			if(liczba%5==0)
			{
				licznik++;
				cout << liczba << endl;
			}
		}
	}
	
	cout << "Ilosc liczb podzielnych przez 5: " << licznik;
	return 0;
	
}
