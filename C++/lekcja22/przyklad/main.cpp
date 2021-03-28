#include <iostream>

using namespace std;


float obj(float a=1, float b=1, float c=1)
{
   return a*b*c;   
}



int main()
{
    cout<<"Obliczanie objetosci prostopadloscianu\n";
    cout<<"\na=1, b=1, c=1  V= "<<obj();
    cout<<"\na=2, b=1, c=1  V= "<<obj(2);
    cout<<"\na=3, b=4, c=1  V= "<<obj(3,4);
   cout<<"\na=5, b=6, c=10  V= "<<obj(5,6,10);
       


return 0;
}
