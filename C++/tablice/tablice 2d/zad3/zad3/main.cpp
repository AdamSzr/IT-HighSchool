#include <iostream>
#include <cstdlib>
#include <time.h>
  int zamiana1,zamiana2;    int pomocnicza;
using namespace std;
  
int main()
{
    srand(time(0));
    const int n=5;
    const int m=3;
    int tabl[n][m];


    for(int x=0; x<n;x++)
    {
          for(int w=0; w<m;w++)
          {
              tabl[x][w]=rand()%21-10;
              cout<< " "<<tabl[x][w];
          }
          cout <<endl;
    }
   /* cout<<"podaj jakie wiersze chcesz zamienic ";

    cin >> zamiana1>>zamiana2;



    for (int z=0; z<m;z++ )
    {


        pomocnicza =tabl[zamiana1-1][z];
        tabl[zamiana1-1][z]=tabl[zamiana2-1][z];
        tabl[zamiana2-1][z]=pomocnicza;
    }

       for(int x=0; x<n;x++)
    {
          for(int w=0; w<m;w++)
          {

              cout<< " "<<tabl[x][w];
          }
          cout <<endl;
    }


*/

    cout <<"------------------------"<<endl;
    cout <<"podaj kolumny do zamiany 1-3 ";
    int kolumna1,kolumna2;
    cin >>kolumna1>>kolumna2;



        for (int z=0; z<n;z++ )
    {


        pomocnicza = tabl[z][kolumna1-1];
        tabl[z][kolumna1-1]=tabl[z][kolumna2-1];
        tabl[z][kolumna2-1]=pomocnicza;
    }

    for(int x=0; x<n;x++)
    {
          for(int w=0; w<m;w++)
          {

              cout<< " "<<tabl[x][w];
          }
          cout <<endl;
    }

    return 0;
}
