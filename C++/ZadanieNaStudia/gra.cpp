#include <iostream>
#include <conio.h>
#include <windows.h>
#include <cstdlib>
#include <time.h>
#include <cmath>
#include <fstream>
using namespace std;


const int x=11;
const int y=8;
const int ile_m=7;
int znak;
char tab[y][x];
int polozenie_y=(y-1),polozenie_x=0;
int wywolanie;
int mina_y[ile_m],mina_x[ile_m];
fstream plik;


void plansza(char tablica[y][x])
{

system("cls");

cout<<' ';

   for (int border_top=0;border_top<ceil(x*1.2);border_top++)
   {
     cout<<"-";
   }
   cout<<endl;

   for(int ds=0;ds<y;ds++)
   {
       cout<<' '<<char(124);
       for(int df=0;df<x;df++)
       {

           cout<<tab[ds][df];

       }
       cout<<char(124)<<endl;
   }

   cout<<' ';
   for (int border_bot=0;border_bot<ceil(x*1.2);border_bot++)
   {
     cout<<'-';
   }

cout<<endl<<"pozycja y:"<<polozenie_y<<" pozycja x"<<polozenie_x;

}



bool detektor(char tablica[y][x])
{
bool wyslij=false;
for (int xx=0;xx<ile_m;xx++)
{




    if (polozenie_y==mina_y[xx] && (polozenie_x+1)==mina_x[xx])
    {
        wyslij=true;
    }
    if (polozenie_y==mina_y[xx] && (polozenie_x-1)==mina_x[xx])
    {
        wyslij=true;
    }
    if ((polozenie_y+1)==mina_y[xx] && (polozenie_x)==mina_x[xx])
    {
        wyslij=true;
    }
     if ((polozenie_y-1)==mina_y[xx] && (polozenie_x)==mina_x[xx])
    {
        wyslij=true;
    }


}

if (wyslij==false)
    {


        return false;
    }

if (wyslij==true)
    {

        return true;
    }
}

void wejscie_w_sciane()
{
      if (polozenie_x<0 || polozenie_y<0 || polozenie_x>(x-1) || polozenie_y>(y-1))
            {
                system("cls");
                cout <<"Koniec gry rozbiles sie";Sleep(2000);
                exit(0);

            }
}

void poruszanie(char tablica[y][x])
{

    if (znak==224) // znaki spec strzalki
    {


    znak=getch();
    switch(znak)
        {
        case 72:

             if (detektor(tablica))
             {
                 tablica[polozenie_y][polozenie_x]='!';
             }
             else
             {
                tablica[polozenie_y][polozenie_x]='.';
             }
            polozenie_y=polozenie_y-1;


            if (!detektor(tablica))
            {
               tablica[polozenie_y][polozenie_x]='#';
            }
            else
            {
                tablica[polozenie_y][polozenie_x]='!';
            }







        break;
        case 80:

             if (detektor(tablica))
             {
                 tablica[polozenie_y][polozenie_x]='!';
             }
             else
             {
                tablica[polozenie_y][polozenie_x]='.';
             }

            polozenie_y=polozenie_y+1;

            if (!detektor(tablica))
            {
               tablica[polozenie_y][polozenie_x]='#';

            }
            else
            {
                tablica[polozenie_y][polozenie_x]='!';
            }






        break;
        case 77:

             if (detektor(tablica))
             {
                 tablica[polozenie_y][polozenie_x]='!';
             }
             else
             {
                tablica[polozenie_y][polozenie_x]='.';
             }


            polozenie_x=polozenie_x+1;

            if (!detektor(tablica))
            {
               tablica[polozenie_y][polozenie_x]='#';

            }
            else
            {
                tablica[polozenie_y][polozenie_x]='!';
            }




        break;
        case 75:

             if (detektor(tablica))
             {
                 tablica[polozenie_y][polozenie_x]='!';
             }
             else
             {
                tablica[polozenie_y][polozenie_x]='.';
             }


            polozenie_x=polozenie_x-1;

            if (!detektor(tablica))
            {
               tablica[polozenie_y][polozenie_x]='#';

            }
            else
            {
                tablica[polozenie_y][polozenie_x]='!';
            }



        break;
        }

        wejscie_w_sciane();
        plansza(tablica);





    }

}



void stat_win_lose(char tablica[y][x])
{
    if (polozenie_y==0 && polozenie_x==(x-1))
    {
        system("cls");
        cout<<"Gratulacje wygrales";
        Sleep(2000);
        exit(0);

    }

    for (int i=0;i<ile_m;i++)
    {
             if (polozenie_y==mina_y[i] && polozenie_x==mina_x[i])
        {
            system("cls");
            cout<<"Wszedles na mine";
            Sleep(2000);
            exit(0);

        }
    }

}

int wylosuj()
{
    if(wywolanie=0)
    {
      return rand() %x ;
    }
    if (wywolanie=1)
    {
        return rand() %y ;
    }

}

bool czyBylaWylosowana( int iLiczba, int tab[], int ile, int wywolanie )
{

    if (wywolanie=0)
    {
        if (iLiczba==(x-1)) // nie moze mina się zrespic na starcie
        {
            return true;
        }

    }



     if (wywolanie=1)
    {
        if (iLiczba==(y-1)) // nie moze mina sie zrespic na mecie
        {
            return true;
        }

    }


    if( ile <= 0 )
    {
      return false;
    }


    int i = 0;
    do
    {
        if( tab[ i ] == iLiczba )
             return true;

        i++;
    } while( i < ile );

    return false;
}

void miny(char tablica[y][x])
{
    srand(time(NULL));

     int wylosowanych=0;
       do
        {
       wywolanie=0;
       int liczba = wylosuj();

           if( czyBylaWylosowana( liczba, mina_y, wylosowanych,wywolanie ) == false )
           {
                mina_y[ wylosowanych ] = liczba;
                wylosowanych++;
           }
           liczba = wylosuj();
           wywolanie=1;
           if( czyBylaWylosowana( liczba, mina_x, wylosowanych,wywolanie ) == false )
           {
                mina_x[ wylosowanych ] = liczba;

           }
        } while( wylosowanych < ile_m );
        wylosowanych++;





}

bool alert()
{


    plik.open("ustawienia.txt",ios::in);
    if(plik.good()==false)
    {
        plik.open("ustawienia.txt",ios::out);
        plik<<"1"<<endl; //zapis do plik
        plik.close(); //zamyka plik
        return 1;
    }
    else
    {
    string linia;
    getline(plik,linia);
        if (linia=="1")
        {
            return 0;


        }
        else
        {   plik.close();
            plik.open("ustawienia.txt",ios::out );
            plik<<"1"<<endl; //zapis do plik
            plik.close(); //zamyka plik
            return 1;
        }

    }

    plik.close();
}



void instrukcja()
{
  MessageBox(
  0,
  "Sterowanie --> strzalkami \nKlawisz ESC--> konczy gre \nMusisz dojsc do prawego gornego rogu \nPOWODZENIA",
  "Instrukcja gry",
  MB_OK
);
}

void czywystartowac()
{
    if ((ile_m >= x) || (ile_m >= y))
        {
        cout <<"WPISALES ZA DUZO MIN";
        Sleep(2000);
        exit(0);
        }

}

int main()
{
    SetConsoleTitle("Agnieszka Gra");
 czywystartowac();

  if(alert())
    {
    instrukcja();
    }


tab[polozenie_y][polozenie_x]='#';

miny(tab);
for (int i=0;i<ile_m;i++)
{
  tab[mina_y[i]][mina_x[i]]='M';
}


plansza(tab);
for(;;)
{
    if (kbhit())
    {
    znak=getch();

    if (znak==27)
    {   system("cls");
        cout<< "Wyszedles z gry";
        Sleep(1000);
        return 0;
    }

poruszanie(tab);
stat_win_lose(tab);
    }


}



    return 0;
}
