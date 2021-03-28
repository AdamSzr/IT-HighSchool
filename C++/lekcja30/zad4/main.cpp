#include <iostream>
#include <cstdlib>
#include <math.h>
using namespace std;

double fun1(double x)
{
return x*x*x+5*x-3;  //f(x)=x^3+5x-3

}

double fun2(double x)
{
return x*x*x-8;

}

double fun3(double x)
{

}

double oblicz (double p,double q,double eps)  //poczatek koniec dokladnosc obliczen
{
double s; //zalezione mz



                while (fun1(p)!=0 && fun1(q)!=0 && fabs(q-p)>=eps)
                {
                    s=(p+q)/2;
                    if (fun1(p)*fun1(s)>0)
                    {
                        p=s;
                    }
                    else
                    {
                        q=s;
                    }

                }







    if (fun1(p)==0)
    {
        return p;
    }
    if (fun1(q)==0)
    {
        return q;
    }



}

int main()
{
float e1,q,p;




    cout <<"Podaj kolejno: poczatek przedzialu  -- koniec przedzialu -- dokladnos";
    cin>>p;
    cin>>q;
    cin>>e1;
    cout <<endl<<"Miejsce zerowe :"<<oblicz(p,q,e1)<<endl;


system("Pause");



    return 0;
}
