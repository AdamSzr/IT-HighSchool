#include <iostream>
#include <math.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	cout<< "podaj liczbê ktora mam sprawdzic ";
	int liczba;
	cin>>liczba;
	
	int pom=sqrt(liczba);
	bool czy_pierwsza = true;
	for (int i=2; i<=pom;i++)
	{
	if (liczba%i==0)
	{
		czy_pierwsza= false;
		break;
		}	
		
	}	
	
	if(czy_pierwsza)
	{
		cout<<endl<<liczba<<"- to jest liczba pierwsza";
		
	}
	
	else
	{
		cout<<endl<<liczba<<"- to NIE JEST liczba pierwsza";
	}
	
	return 0;
}
