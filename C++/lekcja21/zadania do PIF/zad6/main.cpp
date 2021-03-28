#include <iostream>
#include<time.h>
#include <cstdlib>
#include <windows.h>
using namespace std;
int silnia(int liczba)
{
int z;
	for (int i=1;i<=liczba;i++)
	{
		z=z*i;
	}

	return z;
}

int suma(int li)
{
	int z;
		for (int i=1;i<=li;i++)
	{
		z=z+i;

	}
	return z;
}


int main()
{
cout <<"Podaj watrosc n";
int n;
cin>>n;
srand(time(0));
int x=rand()%6+5;
x=4;
cout <<x<< " losowana"<<endl;

int w,w1,w2;
w=silnia(x);cout<<w<<endl;
w1=silnia(n);cout<<w1<<endl;
w2=suma(n);cout<<w2<<endl;

float wynik=(w+w1)/w2;
 cout <<endl<<"wynik dzialania ="<<wynik;
return 0;
}
