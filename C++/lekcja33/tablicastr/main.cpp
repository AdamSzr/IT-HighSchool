#include<iostream>
#include<cstdlib>
#include <time.h>
using namespace std;

struct punkty{
  int x, y;
  char nazwa;
};




int main()
{
 punkty tab[1000];
srand(time(0));


    for (int i=0;i<1000;i++)
    {
        tab[i]={rand()%10,rand()%9+50,char(rand()%25+97)};

    }
    for (int i=0;i<1000;i++)
    {
       cout<<tab[i].x<<" - "<<tab[i].y<<" - "<<tab[i].nazwa<<endl;

    }



  system("pause");
  return 0;
}
