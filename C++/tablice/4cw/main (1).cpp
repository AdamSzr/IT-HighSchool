#include <iostream>
#include <cstdlib>
#include <time.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

using namespace std;
int main(int argc, char** argv) 
{
	srand(time(NULL));
	int n;
	int z[n];
	int suma;
	
	
	
	cout<< "Podaj liczbe n -- (ile liczb chcesz wylosowac)";
	cin >>n;
	
	

	
	
	
	
	for (int x=0;x<n;x++)
	{ 
	z[x]=rand()%11;
	cout<<"liczba pod inedexm "<<x << " to "<<z[x]<<endl;
	suma=suma+z[x];
	}
	
	
	
	
	cout <<"\n\n\n------- suma "<<suma<<" ----------";
	
	return 0;
}
