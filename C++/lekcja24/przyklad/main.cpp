#include <iostream>

using namespace std;


void wypisz();
void wypisz(int x);
void wypisz (int x, bool y);
void wypisz (char x, char y);


int main(int argc, char *argv[])
{
    wypisz();
    wypisz(5);
    wypisz(3,false);
    wypisz('A', 'Z');

//-----------------------



return 0;
}


void wypisz()
{
  cout<<"\nDziala funkcja wypisz() - ta bez parametrow!";     
}
void wypisz(int x)
{
  cout<<"\nA teraz dziala funkcja wypisz(int x) x="<<x;    
}
void wypisz (int x, bool y)
{
  cout<<"\nA teraz dziala funkcja wypisz(int x, int y) x="
      <<x<<" y="<<y;   
}
void wypisz (char x, char y)
{
  cout<<"\nFunkcja pokaze znaki wypisz(char x, char y) znak="
      <<x<<" znak="<<y;    
}
