#include <iostream>
#include <windows.h>
#include <time.h>
#include <cstdlib>
#include <string>
using namespace std;



int main()
{
  /*
    string ww="kot";
    char z=ww[0];
    int w=0;
    w=z;
    cout<<w;          */

    string wpis;
    cin>>wpis;
    int dl;
    dl=wpis.length();
    for (int i=0;i<dl/2;)
    {
        if(wpis[i]!=wpis[dl-1-i])
        {
            cout<<"TO NIE JEST PALINDROM";
            return 0;
        }
        else
        {
        i++;

        }



    }
    cout<<"TO JEST PALINDROM";







    return 0;
}
