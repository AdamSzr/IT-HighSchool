#include <iostream>
#include <windows.h>

using namespace std;


bool rok(int a)
{

    if (a>=1582)
    {

    if((a%4==0 && a%100!=0)||(a%400==0))
    {
        return true;
    }
    else
    {
        return false;
    }
    }
    else
    {
        if (a%4==0)
        {
            return true;
        }
        else
        {
            return false;
        }
    }




}




int main()
{


cout <<"podaj rok ";
int a;
cin>>a;
bool wynik=rok(a);
if (wynik==true)
{
 cout <<"Rok "<<a<<" jest przestepny"<<endl;
}
else
{
    cout <<"Rok "<<a<<" NIE jest przestepny"<<endl;
}

system("Pause");
return 0;
}
