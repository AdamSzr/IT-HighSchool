#include <iostream>
#include <windows.h>
using namespace std;

string tekst;
int dlugosc;

int main(int argc, char** argv) 
{
	cout << "Podaj tekst: ";
	getline(cin, tekst);
	dlugosc = tekst.length();
	for(int i=0; i<dlugosc/2; i++)
	{
		if(tekst[i]!=tekst[dlugosc-i-1])
		{
			cout << "Nie";
			exit(0);
		}	
	}
	
	cout << "TAK";
	
	return 0;
}

