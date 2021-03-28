#include <iostream>
#include <cstdlib>
#include <time.h>
using namespace std;

int main(int argc, char** argv)
{

	srand(time(NULL));
	int tab[6];
	int ile_liczb=1;
	tab[0]=rand()%49+1;




	do
	{
	int liczba=rand()%49+1;
	bool jest=true; //zak³adamy ze jest rózna

	for (int i=ile_liczb-1; i>=0 ;i--) //sprawdzamy liczbe czy jest ro¿na
	{
		if(liczba==tab[i])
		jest=false;

	}
	if(jest==true)
	{
	tab[ile_liczb]=liczba;
	ile_liczb++;
	}
	}
	while(ile_liczb<6); //konczy program po wylosowaniu 6 liczb

	for (int z=0; z<6; z++)
	{
		cout<<"liczba wylosowana "<<z+1<<"  to  :"<< tab[z]<<endl;
	}







	return 0;
}
