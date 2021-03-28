#include <iostream>
#include <cstdlib>
#include <time.h>
using namespace std;


void liczby (int los[], int &parz, int &niep)
{

    for (int i=0;i<30;i++)
    {


        if (los[i]!=0)
        {
            cout <<los[i]<<" =";
            if(los[i]%2==0)
           {
               parz=parz+1;
               cout <<"parzyste"<<endl;
           }
           else
           {
               niep=niep+1;
               cout <<" Nieparzyste"<<endl;
           }

    }

    }

}


int main()
{


int losowane[30];
srand(time(0));

    for (int i=0;i<30;i++)
    {

        losowane[i]=rand()%11-5;
    cout<<losowane[i]<<" ";

    }

cout<<endl<<endl;

int parzyste=0,nieparzyste=0;

liczby(losowane, parzyste, nieparzyste);

cout <<"parzyste "<<parzyste<<" nieparzyste " <<nieparzyste<<endl;































	return 0;
}
