#include <iostream>
#include <string>
#include <algorithm>
#include <windows.h>
using namespace std;

int main()
{
   /* string jed,trzy,dwa;//laczenie tekstów
    jed="ala ";
    dwa="kota";
    trzy=jed+dwa;
    cout <<trzy;*/   //laczenie tekstów








    //zmiana wielkosci liter
   /* string napis="Ala ma kota";
    transform(napis.begin(),napis.end(),napis.begin(),::toupper); //na duze
    cout <<napis;
    transform(napis.begin(),napis.end(),napis.begin(),::tolower); // na ma³e
    cout <<endl<<napis;*/








    //znajdowanie frazy w lancuchu
   /* cout <<" masz wyrazenie --Ala ma kota-- co chcesz wyszukac ";
    string szukana;
    cin >>szukana;

    string napis="Ala ma kota";
    int  pozycjawyr=napis.find(szukana);

    if (pozycjawyr!=string::npos)
    {
          cout <<"twoj wyraz znajduje sie na pozycji: "<<pozycjawyr;
    }
    else
    {
       cout<< "nie znaleziono takiego wyrazu";
    }*/











    //kasowanie częsci napisu
   /*  string napis="Ala ma kota";
     cout <<"masz --Ala ma kota-- co chcesz usunac -->";
     string wpis;
     cin >>wpis;
     int  pozycjawyr=napis.find(wpis);
     int dl=wpis.length();
     napis.erase(pozycjawyr,dl);
     cout <<napis <<"<-------nowy napis"<<endl;*/








    //dopisywanie
   string napis="Ala ma kota ";
     cout <<"podaj co chesz wstawic do frazy -ala ma kota-";
    string dodatek;
     getline(cin,dodatek);
     napis.insert(11,dodatek);
 cout <<napis <<"<-------nowy napis"<<endl;







 //zastępowanie
   /* string napis="Ala ma kota ";
    cout <<"podaj co chcesz zastapic ";
    string zast;
    getline(cin,zast);

    string nowy;
        cout <<"podaj na co chcesz zastapic ";
    getline(cin,nowy);
    int dl=nowy.length();

     int  pozycjawyr=napis.find(zast);
    napis.replace(pozycjawyr,dl,nowy);
 cout <<napis <<"<-------nowy napis"<<endl;*/







 //wyciągnięcie częsci łancucha
 /*string napis="Ala ma kota ";

 string  nowynapis=napis.substr(4,7);
  cout <<nowynapis <<"<-------nowy napis"<<endl;*/

  //--------------------------------------------------ASCII-----------------------------------------




 system("pause");
    return 0;
}
