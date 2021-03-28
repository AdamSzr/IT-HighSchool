#include <iostream>
#include <string>
#include <Windows.h>
using namespace std;

class pralka {
	string nazwa;
	float temp, woda, proszek;

public:
	void wpisz()
	{
		cout << "podaj nazwe: " << endl;
		cin >> nazwa;
		cout << "podaj temperature w C: " << endl;
		cin >> temp;
		cout << "podaj woda: " << endl;
		cin >> woda;
		cout << "podaj proszek: " << endl;
		cin >> proszek;
		cout << endl;
	}
	void pokaz()
	{
		cout << "-------------------------"<<endl;
		cout << "nazwa: " << nazwa << endl;
		cout << "temperatura parnia: " << temp << endl;
		cout << "ilosc wopdy: " << woda << endl;
		cout << "ilosc proszku: " << proszek << endl;
		cout << "-------------------------" << endl;
	}
	void wypierz()
	{
		this->temp = 10;
		this->proszek = 0;
		this->woda = 0;
		cout << "PLUCZE I WIRUJE" << endl;;
	}
	pralka();
	pralka(string wpisane, float temperatura, float ile_wody, float ile_prosz);
	~pralka();
};


pralka::pralka(string wpisane, float temperatura, float ile_wody, float ile_prosz)
{
	nazwa = wpisane;
	temp = temperatura;
	woda = ile_wody;
	proszek = ile_prosz;
}

pralka::~pralka()
{
	cout << "****** PARANIE ZAKONCZONE! ******"<<endl;
}

pralka::pralka()
{
	nazwa = "Toshiba";
	temp = 30;
	woda = 20;
	proszek = 10.34;
}

int main()
{

	{pralka nr1;
	nr1.wpisz();
	nr1.pokaz();
	nr1.wypierz();
	nr1.pokaz();

	}

	cout << endl << endl;
	{
		pralka nr1("bosh", 30, 100, 190);
		nr1.pokaz();
		nr1.wypierz();
		nr1.pokaz();
	}

	cout << endl << endl;
	pralka *nr1 = new pralka("beco", 70, 245, 10.4);
	nr1->pokaz();
	nr1->wypierz();
	nr1->pokaz();






	system("pause");
	return 0;
}
