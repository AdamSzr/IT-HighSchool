#include <iostream>
#include <math.h>
#include <cmath>
using namespace std;


void kolo(float r1, float &pole, float &obj)
{

obj=pow(r1,3)*4/3*M_PI;
pole=4*M_PI*pow(r1,2);
}





int main()
{



float rkolo,polek,objk;
cout << "podaj promien kola" ;
cin >>rkolo;
kolo(rkolo,polek,objk);
cout <<"POLE kola wynosi" << polek<<endl ;
cout <<"OBJETOSC kola " << objk;



return 0;
}
