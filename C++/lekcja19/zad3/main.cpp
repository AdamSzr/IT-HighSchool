#include <iostream>

using namespace std;


float dodaj()
{
float w,z,x;
cout<<"podaj x, i y"<<endl;
cin>>w;         cin>>x;
z=w+x;
  return    z;
}


float odejmij()
{
float ww,zz,xx;
cout<<"podaj x, i y"<<endl;
cin>>ww;        cin>>xx;
zz=ww-xx;
  return    zz;
}

float pomnoz()
{
float w1,z1,x1;
cout<<"podaj x, i y"<<endl;
cin>>w1;        cin>>x1;
z1=w1*x1;
  return    z1;
}



int main()
{
//     float wynik = dodaj(); cout <<"wynik dodawania "<< wynik;
//     float wynik1=odejmij(); cout <<"wynik odejmowania "<< wynik1;
    float wynik2=pomnoz(); cout <<"wynik mnozenia "<< wynik2;

return 0;
}
