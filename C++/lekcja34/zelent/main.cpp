#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>
using namespace std;




int main(int argc, char** argv)
{

    //ZAPIS DO PLIKU

   /* fstream plik;
    plik.open("Dane.txt",ios::out | ios::app);




   string wpisane;
     cout<<"imie";
    cin>>wpisane;
    plik<<wpisane<<"\n";

    cout<<"nazwisko";
    cin>>wpisane;
    plik<<wpisane<<"\n";
    cout<<"telefon";
    cin>>wpisane;
    plik<<wpisane<<"\n";

    plik.close();*/




    //ODCZYT Z PLIKU


    fstream txt;
    txt.open("Dane.txt",ios::in);

    if(txt.good())
    {
        int i=0;
        string znaki;
        while(!txt.eof())
        {

            getline(txt,znaki);
            switch(i)
            {
                case 1:
                cout<<"Linia nr 1 :"<<endl<<endl;
                cout<<znaki;
                break;
                 case 2:
                cout<<"Linia nr 2 :"<<endl<<endl;
                cout<<znaki;
                break;
                 case 3:
                cout<<"Linia nr 3 :";
                cout<<znaki<<endl<<endl;
                break;
            }

            i++;

        }


    }
    else{
        cout <<"pliku nie mozna odnalesc";
        exit(0);
    }



	return 0;
}
