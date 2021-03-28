#include <iostream>
using namespace std;

string tekst;
int dl;

void sortowanie_babelkowe(string &t, int dlugosc)
{
    for(int i=0; i<dlugosc-1; i++)
    {
        for(int j=0; j<dlugosc-1; j++)
        {
            if(t[j+1]<t[j])
            {
                char bufor;
                bufor=t[j+1];
                t[j+1]=t[j];
                t[j]=bufor;
            }
        }//koniec pêtli wewnêtrznej
    }//koniec pêtli zewnêtrznej
}


int main(int argc, char** argv) 
{
	cout << "Podaj tekst: ";
	getline(cin, tekst);
	dl = tekst.length();
	sortowanie_babelkowe(tekst, dl);
	cout << tekst;
	return 0;
}


