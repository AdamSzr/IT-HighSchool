#include <iostream>

using namespace std;



void owca()
{
    cout <<" Meee ";
}
void baran()
{
    cout <<" BEeee ";
}

void pies()
{
    cout <<" chau ";
}
void kot()
{
    cout <<" MIAAau ";
}
void krowa()
{
    cout <<" MUUuuu ";
}

void swinia()
{
    cout <<" chrum ";
}


int main()
{
cout<<" wpisz 1 jesli chcesz owce, 2-barana, 3-psa, 4-kota, 5-krowe, 6-swinie"<<endl;
int jakie_zwierze;cin >>jakie_zwierze;

int ile_razy;cout <<"ile razy chcesz zobaczyc odglos ";
cin >>ile_razy;


switch(jakie_zwierze)
{
  case 1:
    for (int i=0;i<ile_razy;i++)
    {
        owca();
    }
break;

  case 2:
    for (int i=0;i<ile_razy;i++)
    {
        baran();
    }
break;

  case 3:
    for (int i=0;i<ile_razy;i++)
    {
        pies();
    }
break;

  case 4:
    for (int i=0;i<ile_razy;i++)
    {
        kot();
    }
break;

  case 5:
    for (int i=0;i<ile_razy;i++)
    {
        krowa();
    }
break;


  case 6:
    for (int i=0;i<ile_razy;i++)
    {
        swinia();
    }
break;
}






return 0;
}
