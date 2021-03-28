#include <iostream>
#include <math.h>

using namespace std;

int main(int argc, char** argv)
{
	cout<<"Podaj liczbe w systemie dwojkowym: ";
	string st;
	getline(cin, st);
	int dl=st.length();
	int waga=1;
	int wynik=0;

	for (int i=0; i<dl; i++)
	{
		if(st[dl-1-i]=='1')
			wynik=wynik+waga;
		waga=waga*2;
	}

	cout<<wynik;





	return 0;
}
