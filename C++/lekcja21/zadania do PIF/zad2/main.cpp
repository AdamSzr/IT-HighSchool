#include <iostream>

using namespace std;


int suma(int a)
{
   int wynik=0;
while(a!=0)
{
    wynik=wynik+a%10;
    a=a/10;

}


     return wynik;
}




int main()
{


cout <<"podaj liczb";
int a;
cin>>a;

int wynik2=suma(a);
cout <<"Suma cyfr liczby "<<a<<":"<<" wynosi "<<wynik2;

return 0;
}
