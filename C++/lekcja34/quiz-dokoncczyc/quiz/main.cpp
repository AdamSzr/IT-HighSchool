#include <iostream>
#include <fstream>
#include <windows.h>
using namespace std;

    string temat,nick;
    string tresc[5],odpA[5],odpB[5],odpC[5],odpD[5];
    string poprawna[5];
string odp_wpis;
int pkt;

bool sprawdz(string wpis)
{


    if (wpis==odp_wpis )
    {
        return true;
    }

}


int main()
{



    fstream plik;
    plik.open("pytania.txt",ios::in);

    getline(plik,temat);

    getline(plik,nick);
int licznik=0;
   while(!plik.eof())
   {
        getline(plik,tresc[licznik]);
        getline(plik,odpA[licznik]);
        getline(plik,odpB[licznik]);
        getline(plik,odpC[licznik]);
        getline(plik,odpD[licznik]);
        getline(plik,poprawna[licznik]);
        licznik++;
    }
plik.close();




      for (int i=0;i<5;i++)
    {
         cout<<temat<<endl<<nick<<endl<<endl;

        cout<<i+1<<". "<<tresc[i]<<endl;
        cout<<"A) "<<odpA[i]<<endl;
        cout<<"B) "<<odpB[i]<<endl;
        cout<<"C) "<<odpC[i]<<endl;
        cout<<"D) "<<odpD[i]<<endl;
        cin>>odp_wpis;

        if (sprawdz(odp_wpis)==true)
        {
            cout<<"Odpowedziales poprawnie"<<endl;
            Sleep(2000);
            system("cls");
            pkt++;
        }
        else
        {
            cout<<"Odpowiedz niepoprawna"<<endl;
            Sleep(2000);
            system("cls");
        }

    }

cout<<"Uzyskales "<<pkt<<"/5"<<" punktow";

    cout << "" << endl;
    return 0;
}
