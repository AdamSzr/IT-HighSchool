#include <iostream>
#include <math.h>
using namespace std;


  int ilerazyma=0;

int main()
{
    cout << "podaj tekst a ja go przerobie" << endl;
    string tekst;
    getline(cin,tekst);
    int dl=tekst.length();
    string zapasowy=tekst;
    cout<<endl<<"-------------------------"<<endl;
    cout<<"dlugosc podanego przez ciebie tekstu to : "<<dl<<endl;
     cout <<"---------------------------"<<endl;
    cout<<"tekst zlorzony tylko z przystych indexow : ";
    for(int x=0;x<dl;x++)
    {
       char z=tekst[x];
        if (x%2==0)
        {
            cout <<z;
        }

    }
    cout<<endl<<"-------------------------"<<endl;

    int ilea=0;
     for(int x=0;x<dl;x++)
    {
    if (tekst[x]=='a')
    {
        ilea=ilea+1;
    }
    }
    cout<<"w tekscie wystapilo "<< ilea <<" literek a"<<endl;

    cout <<"---------------------------"<<endl;


     string ma="ma";

     for (;;)
     {

         int jest=tekst.find(ma);

         if (jest!=string::npos)
    {
          ilerazyma=ilerazyma+1;
          tekst.erase(jest,2);


    }
    else
    {
       break;
    }
     }

    cout<<"w tekscie wystapilo "<< ilerazyma <<" fraz -ma-"<<endl;

    cout <<"------------------------";

    string spacja=" ";
        for (;;)
     {

         int jest=zapasowy.find(spacja);

         if (jest!=string::npos)
    {

            zapasowy.erase(jest,1);


    }
    else
    {
        break;
    }
     }
    cout<<endl<<"nowy tekst pozbawiony spacjii: "<<zapasowy<<endl<<"--------------";








    return 0;
}
