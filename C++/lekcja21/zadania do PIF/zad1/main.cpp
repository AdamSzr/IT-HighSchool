#include <iostream>

using namespace std;


int NWD(int a, int b)
{
    while(a!=b)
    {
        if(a>b)
        {
           a=a-b;
        }
        else
        {
          b=b-a;
        }

    }


     return a;
}




int main()
{


cout <<"podaj 2 liczby";
int a,b;
cin>>a;
cin>>b;

cout <<"NWD liczb "<<a<<":"<<b<<" wynosi "<<NWD(a,b);

return 0;
}
