#include <iostream>

using namespace std;

float plneur(float w,float x)
{
return w/x;
}

float plndol(float w,float x)
{
    return w/x;
}


float plnfra(float w,float x)
{
    return w/x;
}


int main()
{
cout <<"podaj ile masz zlotych"<<endl;    float w; cin >>w;

    float x=4.3767;
    cout <<w<<" zl "<<"to "<<plneur(w,x)<<" euro "<<endl;

   float x1=4.1241;
   cout <<w<<" zl "<<"to "<<plndol(w,x1)<<" Dolarow "<<endl;

     float x2=4.0825;
    cout <<w<<" zl "<<"to "<<plnfra(w,x2)<<" frankow szwajcarskich "<<endl;

return 0;
}
