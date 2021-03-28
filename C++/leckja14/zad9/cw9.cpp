#include <iostream>

using namespace std;

int main ()
{
	cout<<"podaj liczbe w systemie dziesietnym ktora ma byc przerobiona na binarny ";
	int liczba;
	cin>> liczba;
	
	string wynik=" ";
	while(liczba>0)
	{
		
		string znak;
		
		
		if (liczba%2==0)
		{
			wynik="0"+wynik;
			liczba=liczba/2;
		} 
		 
		 else
		 {
		 	wynik="1"+wynik;
		 	liczba=liczba/2;
		 }
		  
		
		
		
		
	}
	cout<<wynik;
	
	return 0;
}
