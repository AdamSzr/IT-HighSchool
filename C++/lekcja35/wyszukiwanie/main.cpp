#include <iostream>
using namespace std;

string s, wzorzec;
int n=0;

int main(int argc, char** argv) 
{
	cout << "Podaj tekst: ";
	cin >> s;
	cout << "Podaj szukany wzorzec: ";
	cin >> wzorzec;
	int dls = s.length();
	int dlw = wzorzec.length();
	if(dls<dlw)
	{
		cout << "NIE";
		return 0;
	}
	int T[n];
		
	while(s.find(wzorzec)>=0 && s.find(wzorzec)<=dls-1)
	{
		T[n] = s.find(wzorzec)+n*dlw;
		n++;
		s.erase(s.find(wzorzec), dlw);
	}
	
	if(n==0)
		cout << "Brak szukanego wzorca." << endl;
	else
	{
		cout << "--------------------------------";
		cout << endl << "Liczba wystapien wzorca: " << n << endl;
		cout << "Pozycja(e) poczatkowe wzorca: ";
		for(int i=0; i<n; i++)
			cout << T[i] << "  ";
	}
		
	return 0;
}


