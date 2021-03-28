#include <iostream>

using namespace std;


void prostokat(float d1, float d2, float &pole, float &obw)
{
     obw=2*d1+2*d2;
    pole=d1*d2;

}
void kolo (float r1, float &pole, float &ob)
{
    ob=2*3.1415*r1;
    pole=3.1415*r1*r1;

}




int main()
{


/*
float iii;
cout << "podaj 1 krawedz prostokata " ;
cin >>iii;
cout << endl<<"podaj 2 krawedz prostokata ";
float zzz;
cin >>zzz;
float pole,obwod;
prostokat(iii, zzz, pole, obwod );
cout <<"pole prostokata wynosi" << pole<<endl ;
cout <<"OBWOD prostokata " << obwod;*/


float rkolo,polek,obwk;
cout << "podaj promien kola" ;
cin >>rkolo;
kolo(rkolo,polek,obwk);
cout <<"POLE kola wynosi" << polek<<endl ;
cout <<"OBWOD kola " << obwk;



return 0;
}
