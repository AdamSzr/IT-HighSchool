#include <iostream>

using namespace std;
int n;


int w; //wynik
string bin;
int main()
{
   cout <<"podaj liczbe binarna ";

    cin >>bin;

    cout<< "podaj stopien wielomianu ";
    n=bin.length()-1;
    int x=2;
    int a[n+1];
    int i;



    for(i=0;i<=n+1;i++)
    {
      if (bin[i]=='1')
        {
            a[i]=1;


        }
        else
        {
          a[i]=0;
        }
    }

    //------------------------------------

    w=a[0];
    for(i=1;i<=n;i++)
    {
        if (bin[n]=='1')
        {
            w=w*  x+a[i];

        }
        else
        {

        }

    }
    cout<<"wynik to  :"<<w;
    return 0;
}
