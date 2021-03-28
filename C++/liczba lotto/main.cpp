#include <iostream>
#include <cstdlib>
#include <time.h>
using namespace std;
int main(int argc, char** argv)



{
    int tab[5][2];
	srand(time(NULL));



        tab[0][0]=rand()%2;
        tab[0][1]=rand()%2;

        cout <<" 1 para "<<tab[0][0]<<" - "<<tab[0][1]<<endl;

        do
        {
        tab[1][0]=rand()%2;
        tab[1][1]=rand()%2;
        cout <<" 2 para "<<tab[1][0]<<" - "<<tab[1][1]<<endl;
        }
        while((tab[1][0] || tab[1][1]) == (tab[0][0] || tab[0][1]));
/*
        do
        {
        losowe[2]=rand()%49+1;
        }
        while(losowe[2]==losowe[1] || losowe[2]==losowe[0] );

            do
        {
        losowe[3]=rand()%49+1;
        }
        while(losowe[3]==losowe[0] || losowe[3]==losowe[1] || losowe[3]==losowe[2] );

            do
        {
        losowe[4]=rand()%49+1;
        }
        while(losowe[4]==losowe[0] || losowe[4]==losowe[1] || losowe[4]==losowe[2] || losowe[4]==losowe[3] );

        do
        {
        losowe[5]=rand()%49+1;
        }
        while(losowe[5]==losowe[0] || losowe[5]==losowe[1] || losowe[5]==losowe[2] || losowe[5]==losowe[3] || losowe[5]==losowe[4]);
*/



	return 0;
}
