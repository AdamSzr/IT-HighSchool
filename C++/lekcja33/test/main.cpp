#include <iostream>
#include <string.h>

using namespace std;

struct samochod
{
  string marka; //pola struktury
  string model;
  int rok_produkcji;
  double pojemnosc;
};


  struct punkty{
  int x, y;
  char nazwa;
};
main()
{


   samochod jezdzik;

   cout<<"podaj marke"<<endl;cin>>jezdzik.marka;
   cout<<"podaj model"<<endl;cin>>jezdzik.model;
   cout<<"podaj rok_produkcji"<<endl;cin>>jezdzik.rok_produkcji;
   cout<<"podaj pojemnosc"<<endl;cin>>jezdzik.pojemnosc;

   cout <<"Dane twojego samochodu --> marka "<<jezdzik.marka<<" model-->"<<jezdzik.model<<" rok prod-->"<<jezdzik.rok_produkcji<<" pojemnosc-->"<<jezdzik.pojemnosc;



   /* samochod ford;

    ford.marka="mustang";
    ford.rok_produkcji=1968;
    cout <<ford.marka<<" "<<ford.rok_produkcji<<ford.model<<endl<<"-----------------------------------------------"<<endl;



  samochod renault = {"renault","megane",2013,2.1};   // poczatkowe wartosci

  //wypisanie wartoœci elementów struktury
  cout<<renault.marka<<endl<<renault.model<<endl<<renault.rok_produkcji
      <<endl<<renault.pojemnosc<<endl;







  punkty tab[1000];   // cos ala tabela w bazie danych  gdzie wierszy jest 1000 a kolumn 3 (x,y,nazwa)
  //przypisanie wartosci do pierwszej komórki tablicy
  tab[0].x = 2;
  tab[0].y = 4;
  tab[0].nazwa = 'A';
  //przypisanie do ostatniej komórki tablicy
  tab[999].x = 1;
  tab[999].y = 5;
  tab[999].nazwa = 'X';
  //odwo³ywanie siê do elementów tablicy
  cout<<"Dane pierwszego punktu: "<<tab[0].x<<" "
  <<tab[0].y<<" "<<tab[0].nazwa<<endl;
   cout<<"Dane  punktu 1000: "<<tab[999].x<<" "
  <<tab[999].y<<" "<<tab[999].nazwa<<endl;

*/

  return 0;



}
