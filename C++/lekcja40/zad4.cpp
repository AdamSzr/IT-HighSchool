#include <iostream>
#include <string>
#include <math.h>
#include <Windows.h>

using namespace std;

#define M_PI 3.14159265358979323846

class kolo {
private:
	string nazwa, kolor;
	float r, x, y;

public:
	void wpisz();
	void wypisz();
	void oblicz_pole();
	kolo();
	kolo(string name, string color, float wart_r, float wart_x, float wart_y);
	~kolo();
};


int main()
{
	{
		kolo nr1;
		nr1.wpisz();
		nr1.wypisz();
		nr1.oblicz_pole(); 
	}

	{
		kolo nr1("okrag nr 1","black",5,4.3,2.2);
		nr1.wypisz();
		nr1.oblicz_pole();
	}
	{
		kolo *nr1 = new kolo("dynamic circle","Green",7,0,0);
		nr1->wypisz();
		nr1->oblicz_pole();
	}

	cout << endl;

	system("pause");
	return 0;
}

kolo::~kolo()
{
	cout <<endl<< "Objekt zostanie usuniety" << endl<<"----------------------------------"<<endl;
}

kolo::kolo(string name, string color, float wart_r, float wart_x, float wart_y)
{
	nazwa = name;
	kolor = color;
	r = wart_r;
	x = wart_r;
	y = wart_y;
}


kolo::kolo()
{
	nazwa = "1.Okrag";
	kolor = "Nijaki";
	r = 4;
	x = 19;
	y = 32;
}

void kolo::oblicz_pole()
{
	cout <<endl<< "Pole kola wynosi " << M_PI * pow(r, 2);
}

void kolo::wypisz()
{
	cout << "Nazwa: " << nazwa;
	cout << endl << "Promien: " << r;
	cout << endl << "Wspolrzedne (" << x;
	cout << "," << y<<")";
	cout << endl << "Kolor: " << kolor;
	
}

void kolo::wpisz() {
	cout << "Podaj nazwe kola: "; cin >> nazwa;
	cout  << "Podaj dl. promienia: "; cin >> r;
	cout  << "Podaj wsp. x: "; cin >> x;
	cout  << "Podaj wsp. y: "; cin >> y;
	cout  << "Podaj kolor kola: "; cin >> kolor;
	cout << endl << endl;
}