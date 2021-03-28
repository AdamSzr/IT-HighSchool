#include <iostream>
#include <cstdlib>
#include <time.h>
int dziala[20];
using namespace std;
int main(int argc, char** argv) 
{
	srand(time(NULL));
	for (int x=0;x<20;x++)
	{
		dziala[x]=rand()%6+1;
		
	}
		for (int x=0;x<20;x++)
	{
		cout<<dziala[x]<< "  inedx-em "<<x<<endl;
	}
		for (int x=0;x<20;x++)
	{
		if (dziala[x]==6)		
	{
	cout<<"wylosowana liczba  "<<dziala[x]<< " kryje sie pod inedx-em "<<x<<endl;
	}
		
		
	}
	return 0;
}
