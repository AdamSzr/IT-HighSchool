#include <iostream>

using namespace std;

int main( )
{
int main( )
{
const int n=10;
cout<<"podaj 10 elementow ktore zapisze w tablicy"
int *tab = new int [n];


for (int i=0; i<n; i++) cin >> tab[i]; // wykonujemy działania na tablicy


delete [] tab; // na końcu  zwalniamy pamięć  przydzieloną na tablicę
}

return 0;
}
