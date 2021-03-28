#include <iostream>

float liczby[16];
using namespace std;
int main(int argc, char** argv) 
{
	
	for (int x=-5;x<=10;x++)
	{
		liczby[x+5]=-2*x*x-5*x+0.5;
	}
	for (int z=0;z<16;z++)
	{
		cout << "pod numerkiem nr. "<<z+5<< " w tablicy widnieje liczba "<<liczby[z] <<endl;
	}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
