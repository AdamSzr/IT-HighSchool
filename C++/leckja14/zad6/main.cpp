#include <iostream>
#include <string>
#include <algorithm>
#include <windows.h>
using namespace std;

int main()
{


    cout <<"podaj tekst a nastpnie rozszerze go w odp sposób"<<endl;
    string tekst;
    getline(cin,tekst);
    string nowynapis;
    int dl=tekst.length();
    string spacja=" ";
    cout<<endl<<"------A-------"<<endl;
    for (int x=0;x<dl;x++)
    {
        nowynapis=nowynapis+tekst[x]+spacja;
    }
    cout<<endl<<nowynapis;
    nowynapis="";
    cout<<endl<<"------B-------"<<endl;
     for (int x=dl;x>=0;x--)
    {
        nowynapis=nowynapis+tekst[x]+spacja;
    }
    cout<<endl<<nowynapis;

nowynapis="";

cout<<endl<<"------C-------"<<endl;

     for (;;)
     {
         int jest=tekst.find(spacja);

         if (jest!=string::npos)
    {

            tekst.erase(jest,1);
    }
    else
    {
        break;
    }
     }


string nowytekst;
    for (int x=0;x<dl/2;x++)
    {


        string spacja=" ";

    nowytekst=nowytekst+tekst.substr(0,2)+spacja;
    tekst.erase(0,2);

    }



cout<<endl<< " nowiutki tekst ze spacjami "<<nowytekst;
    return 0;
    system("pause");
}
