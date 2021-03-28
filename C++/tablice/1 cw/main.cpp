#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) 


{
	int liczby[10];
	
	for (int x=0;x<10;x++)
	{
		cout <<endl<<"podaj  "<<x+1<<" liczbe ";
		cin>>liczby[x];
	}
	cout<<endl<<endl<<endl;
	for (int x=0;x<10;x++)
	{
		cout<<x+1<<" liczba z kolei to "<<liczby[x]<<endl;
	}
	cout<<endl<<endl<<endl;
		for (int x=9;x>=0;x--)
	{
		cout<<x+1<<" liczba z kolei to "<<liczby[x]<<endl;
	}
	
	
	
	
	
	return 0;
}
