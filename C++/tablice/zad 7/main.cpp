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
		
		
		////// do t¹d tylko losowa³o liczby i wyswietla³o na ekran //
		
		
		
		
		
		
		
		
		
		
			
	float c;   // pomocnicza zmienna//
	int w=0;
	cout<< "ile to -ile- na 2    "<< ile/2<<"-------------"<<endl;
	for (w; w<ile/2 ;w++)
	{
		c=losowane[w];// zapis do pomocniczej liczbe z losowane[w]//
		losowane[w]=losowane[ile-1-w]; // zamiana liczby z  komórki np 2 od konca do losowane komórki 2 //
	
		losowane[ile-1-w]=c;  //wpisanie liczby do komórki 2 od konca //
	}















	cout <<"--------------------"<<endl;
			for (int z=0;z<ile;z++)
	{
		cout<<"liczba wylosowana z nr. "<<z<< "  to "<<losowane[z]<<endl;\
		
	}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
