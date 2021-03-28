#include <iostream>
#include <fstream>
using namespace std;

bool parzyste(int dana_liczba)
{
        if (dana_liczba%2!=0)
        {
            return false;
        }
        else
        {
            return true;
        }

}

int ile_liczb=0;
int wpis=0;


int main()
{

    fstream dane;
    dane.open("liczby.txt",ios::in);

    while(!dane.eof())
    {
        dane>>wpis;
        if (parzyste(wpis)==true)
        {

            ile_liczb++; //<--- zliczanie ilości liczb parzystych
        }

    }
    dane.close();


    dane.open("liczby.txt",ios::in ); //<-- zeby od nowa mozna by³o wczytac ten sam plik


      fstream plik;
      plik.open("parzyste.txt",ios::out); // <-- otworzenie pliku w którym bd zapisywane liczby
      plik<<ile_liczb<<"<--tyle parzystych \n";


           while(!dane.eof())
        {
            dane>>wpis;
            if (parzyste(wpis)==true)
            {
                plik<<wpis<<endl;
            }

        }



    plik.close();
    dane.close();
	return 0;
}
