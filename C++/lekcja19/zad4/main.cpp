#include <iostream>

using namespace std;


float dodaj(float w ,float x)
{

   return  w+x;
}

float odejmij(float w ,float x)
{

   return  w-x;
}


float pomn(float w ,float x)
{

   return  w*x;
}




int main()
{
    float w;cout <<" podaj x =";
    cin >>w;

    float x;cout <<" podaj y =";
     cin >>x;

cout <<"\n\ndodawanie "<<dodaj(w,x)<<endl;
cout <<"odejmowanie "<<odejmij(w,x)<<endl;
cout <<"mnozenie "<<pomn(w,x)<<endl;


return 0;
}
