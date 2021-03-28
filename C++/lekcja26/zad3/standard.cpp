#include <iostream>

using namespace std;




int sinia(int n)
{
    int licz=1;
    for (int i=1;i<n+1; i++)
    {
        licz=licz*i;
    }
    return licz;
}

long int sil(int liczba)
{
    if (liczba==0)
    {
        return 1;
    }
    else
    {
        return liczba*sil(liczba-1);
    }

}



int main()
{

cout <<"iteracyjny "<<sinia(25);




cout <<endl<<"rekurencyjny "<<sil(25);


	return 0;
}
