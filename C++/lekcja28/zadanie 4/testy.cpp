#include <iostream>

using namespace std;

void indeksowy(int *tablica,int n)
{
	for (int w=0; w<n;w++)
	{
		cin>>tablica[w];
	}
	cout<<endl<<"Oto twoja tablica:"<<endl;
	for (int w=0; w<n;w++)
	{
	cout<<tablica[w]<<" ";
	}
}


void wskaznikowy(int *tablica,int n)
{
	for (int w=0; w<n;w++)
	{
		cin>>*(tablica+w);
	}
	cout<<endl<<"Oto twoja tablica:"<<endl;
	for (int w=0; w<n;w++)
	{
	cout<<*(tablica+w)<<" ";
	}
}


int main()
{
const int n=5;  //zmien jeœli chcesz miec 10 liczb************************************************
int *tab = new int [n];

cout <<"PODAJ 10 LICZB"<<endl;
wskaznikowy(tab,n);
cout<<endl<<endl;
cout <<"PODAJ 10 LICZB"<<endl;
indeksowy(tab,n);




	return 0;
}
