#include <iostream>

using namespace std;
float a,b,c,x1,x2,x3,x4;


bool czy_lezy(float a, float b, float c, float x1,float x2,float x3,float x4)
{
    if ( a*x1+b*x2+c==0 && a*x3+b*x4+c==0 )
    {
        return true;
    }
    else
    {
        return false;
    }


}
int main()
{
cout <<" podaj wspolczyniki prostej "<<endl<<"podaj a= ";
cin >>a;
cout <<"Podaj b= ";
cin >>b;
cout <<"Podaj c= ";
cin >>c;


cout <<"wsp poczatku odcinka "<<endl<<"x1= ";
cin >>x1;
cout <<"Podaj y1= ";
cin >>x2;

cout <<"Podaj x2= ";
cin >>x3;
cout <<"Podaj y2= ";
cin >>x4;


if(czy_lezy(a,b,c,x1,x2,x3,x4))
{
    cout<< "odcinek lezy na prostej";

}
else
{
   cout<<"odcinek nie lezy na prostej" ;
}


return 0;
}
