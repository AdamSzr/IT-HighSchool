#include <iostream>

using namespace std;



int main()
{
//int *a,*b;
//a,b - to wskaŸniki do zapamiêtywania adrwsów typu int
//a,b - s³u¿ad o pokazywania na zmienne typu int

 // wskaŸniki do zapamiêtywania adresów typu float



int x=123, y=-15;
cout <<"x= "<<x<< " y= "<<y;

int *a=&x; //pobranie adresu zm.x do wsk.a
//&- znaczek pobierania adresu

int *b=&y;

cout <<"wsk a "<< a <<" wsk b "<<b<<endl<<endl<<endl;
//_________________________________________________________________

float f=3.14, f1=2.5;
float *wskf=&f, *wskf1=&f1;

cout <<"wskf "<< wskf <<" wskf1 "<<wskf1;


// ----------------------------
string *wsknapis;
cout <<endl<<endl<<endl;
string tekst="to jest tekst do zapisanaia w pamieci";
wsknapis=&tekst;
cout << "tekst ---- "<<tekst<<" miejsce "<<wsknapis;
//-------------------------------------------

cout <<endl<<endl<<endl;

string *nap;

string tek="wyluskiwanie wartosci przez wskaznik";
nap=&tek;
cout <<endl<<"x ="<< *a<<" y="<<*b<<endl;
cout<<"Napis "<<*nap;

	return 0;
}
