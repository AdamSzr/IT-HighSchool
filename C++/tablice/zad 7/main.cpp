#include <iostream>
#include <cstdlib>
#include <time.h>
using namespace std;
int ile;

int main() 
{
	
	
	cout << "podaj ile chcesz liczb ";
	cin >>ile;
	srand(time(NULL));
	float losowane[ile];
	for (int x=0;x<ile;x++)
	{
		losowane[x]=(rand()%1000)/1000.0;
		
	}
	
		for (int z=0;z<ile;z++)
	{
		cout<<"liczba wylosowana z nr. "<<z<< "  to "<<losowane[z]<<endl;\
		
	}
		
		
		////// do t�d tylko losowa�o liczby i wyswietla�o na ekran //
		
		
		
		
		
		
		
		
		
		
			
	float c;   // pomocnicza zmienna//
	int w=0;
	cout<< "ile to -ile- na 2    "<< ile/2<<"-------------"<<endl;
	for (w; w<ile/2 ;w++)
	{
		c=losowane[w];// zapis do pomocniczej liczbe z losowane[w]//
		losowane[w]=losowane[ile-1-w]; // zamiana liczby z  kom�rki np 2 od konca do losowane kom�rki 2 //
	
		losowane[ile-1-w]=c;  //wpisanie liczby do kom�rki 2 od konca //
	}















	cout <<"--------------------"<<endl;
			for (int z=0;z<ile;z++)
	{
		cout<<"liczba wylosowana z nr. "<<z<< "  to "<<losowane[z]<<endl;\
		
	}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
