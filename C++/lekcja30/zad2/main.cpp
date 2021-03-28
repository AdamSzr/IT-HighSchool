#include <iostream>
#include <cstdlib>
#include <math.h>
using namespace std;

float fff( int x)
{
return x*x;

}
int main()
{
float p,q,n,dl,pole;




    cout <<"Podaj kolejno: ilosc prostokątów -- pocz przedzialu -- koniec przedzialu";
    cin>>n;
    cin>>p;
    cin>>q;







dl=(q-p)/n;
float s=0,i=0;




float f;


while(true)
{
if(i<n)
{
s+=fabs(fff(p+(dl*i)+(dl/2)));
    i++;

}
else
{
 pole=dl*s;
 cout<<"Pole ="<<pole;

return 0;
}
}



    return 0;
}
