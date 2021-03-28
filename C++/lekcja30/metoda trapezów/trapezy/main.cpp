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


for (i;i<n;i++)
{
if(i<n)
{
s+=fabs(fff(p+dl*i));


}

}
 pole=dl/2*(fabs(fff(p))+fabs(fff(q))+2*s);
 cout<<"Pole ="<<pole;

    return 0;
}
