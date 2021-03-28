#include <iostream>

using namespace std;
float a1,b1,a2,b2;


bool czy_rownolegle(float a1, float b1, float a2, float b2)
{
    if ( a1==a2 )
    {
        return true;
    }
    else
    {
        return false;
    }


}



bool prostopadle(float a1, float b1, float a2, float b2)
{
    if ( a1*a2==-1 )
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
    cout <<"zad 4 Czy proste sa rownolegle lub prostopadle ";
cout <<" podaj wspolczyniki prostej "<<endl<<"podaj a= ";
cin >>a1;
cout <<"Podaj b= ";
cin >>b2;



cout <<"podaj wsp 2 prostej"<<endl<<"x1= ";
cin >>a2;
cout <<"Podaj y1= ";
cin >>b2;





if(czy_rownolegle(a1,b1,a2,b2)==true)
{
    cout<< "odcinki sa  rownolegle"<<endl;

}
else
{
   cout<<"odcineki nie sa rownolegle"<<endl ;
}

if(prostopadle(a1,b1,a2,b2)==true)
{
    cout<< "odcinki sa  prostopadle";

}
else
{
   cout<<"odcineki nie sa prostopadle" ;
}

return 0;
}
