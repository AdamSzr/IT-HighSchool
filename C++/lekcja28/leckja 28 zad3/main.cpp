#include <iostream>
#include <time.h>
#include <cstdlib>
#include <algorithm>
using namespace std;
void sortowanie_babelkowe( int *tablica,int n)
{
    for(int i=0; i<n-1; i++)
    {

        for(int j=0; j<n-1; j++)
        {

            if(*(tablica+j+1)<*(tablica+j))
            {

                swap(*(tablica+j+1),*(tablica+j));

            }
        }
    }
}


void wpis(int *tablica, int ww)
{

for(int j=0; j<ww; j++)
        {
           *tablica=rand()%100+1;
            cout<<"liczba wylosowana= "<<*tablica<<endl;
            tablica++;
        }
}

void wyswietlanie(int *tablica, int ww)
{
cout<<endl<<endl;
for(int j=0; j<ww; j++)
        {
            cout<<*tablica<<" ";
            tablica++;
        }
}


int main()
{
srand(time(NULL));


int n;
cout << "ile elementow ma byæ w tablicy ? " << endl;
cin >> n;
int *tab = new int [n];
wpis(tab,n);
sortowanie_babelkowe(tab,n);

wyswietlanie(tab,n);




delete [] tab;


    return 0;
}
