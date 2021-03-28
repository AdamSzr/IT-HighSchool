#include <iostream>

using namespace std;


class Punkt
{
	//prywatne cechy
	string nazwa;
	float x,y;
	string kolor;
	
	public:
	void wpisz();
	void wypisz();
	//konstuktor bez parametrow
	Punkt();
	//z parametrami
	Punkt(string naz, float xx, float yy, string kol);
	//destruktor
	~Punkt();
};

void Punkt::wpisz()
{
	cout<<"Podaj nazwe punktu: "<<endl;
	cin>>nazwa;
	cout<<"Podaj x: "<<endl;
	cin>>x;
	cout<<"Podaj y: "<<endl;
	cin>>y;
	cout<<"Podaj kolor: "<<endl;
	cin>>kolor;
}

void Punkt::wypisz()
{
	cout<<"Oto dane obiektu Punkt: "<<endl;
	cout<<nazwa<<"("<<x<<","<<y<<") koloru: "<<kolor;
}
Punkt::Punkt()
{
	nazwa="A";
	x=0;
	y=0;
	kolor="czarny";
}
Punkt::Punkt(string naz, float xx, float yy, string kol)
{
	nazwa=naz;
	x=xx;
	y=yy;
	kolor=kol;
}
Punkt::~Punkt()
{
	cout<<endl<<"Obiekt "<<nazwa
	<<" Za chwile bedzie usuniety!";
}
int main()
{ /*
	Punkt p1;
	p1.wpisz();
	p1.wypisz();
	*/
	Punkt p2("X",10,20,"zielony");
//	p2.wpisz(); 
	p2.wypisz();
	
	Punkt *p3 = new Punkt();
	p3->wypisz();
	delete p3;
 	
	return 0;
}
