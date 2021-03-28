#include <iostream>
#include <cstdlib>
#include <time.h>
using namespace std;

int main()
{
	const int n=5;// rozmiar tablicy (5x5)//
	int tab[n][n];
	/*
	cout<< "wpisuj liczby do tablicy ";
	for (int x=0; x<n ;x++) //wpisywanie do tablicy//
		{
			for (int z=0; z<n;z++)
			{
				cout << "  tab["<<x<<"]"<<"["<<z<<"]  ";
				cin>>tab[x][z];
			}
		}


    cout <<endl<<endl<<endl;
		for (int x=0; x<n;x++) // wypisywanie z tablicy zawartosci//
		{
			for (int z=0; z<n;z++)
			{
				cout <<tab[x][z]<<" liczba z tablicy z index-ami"<<"  tab["<<x<<"]"<<"["<<z<<"]"<<endl;
			}
		}*/
		//--------------------------zad 2 podpkt A.
		cout<< "\n\n\n\n\n Zad 2 podpkt B "<<endl;
		srand(time(NULL));

		for (int x=0; x<n;x++) //wpisywanie do tablicy//
		{
			for (int z=0; z<n;z++)
			{

				tab[x][z]=rand()%100+1;
			}
		}



			for (int x=0; x<n;x++) // wypisywanie z tablicy zawartosci//
		{
			for (int z=0; z<n;z++)
			{
				cout <<tab[x][z]<<" liczba z tablicy z index-ami"<<"  tab["<<x<<"]"<<"["<<z<<"]"<<endl;
			}
		}

        cout<< "\n\n\n\n\n Zad 2 podpkt c "<<endl;


			for (int x=0; x<n;x++) //wpisywanie do tablicy//
		{
			for (int z=0; z<n;z++)
			{

				tab[x][z]=x+z;
			}
		}

				for (int x=0; x<n;x++)
		{
			for (int z=0; z<n;z++)
			{
				cout <<tab[x][z]<<" liczba z tablicy z index-ami"<<"  tab["<<x<<"]"<<"["<<z<<"]"<<endl;
			}
		}


		cout<< "\n\n\n\n\n Zad 2 podpkt d -- zerowanie po przekatnej"<<endl;

        for (int x=0; x<n;x++)
		{
			for (int z=0; z<n;z++)
			{
                    if (x==z)
                {
                    tab[x][z]=0;

                }


				cout <<tab[x][z]<<" ";

                    if (z==n-1)
                {
                    cout <<endl;
                }

			}
		}



	return 0;
}
