#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{

    cout <<"wpisz wyrazenie ";
         string szukana;
        getline(cin,szukana);

    string skladanie;
    int dl=szukana.length();
    for (int x=0;x<dl;x++)
    {
        skladanie=skladanie+szukana[x];
        cout <<skladanie<<endl;
    }

cout<<"*******************"<<endl;

    for (int x=0;x<dl;x++)
    {
        skladanie=skladanie.erase(dl-x,1);
        cout <<skladanie<<endl;
    }



    return 0;
}
