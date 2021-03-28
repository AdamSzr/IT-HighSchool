#include <iostream>

using namespace std;
int n;

float x;
float w; //wynik

int main()
{
    cout<< "podaj stopien wielomianu ";
    cin >>n;
    float a[n+1];

    int i=1;

    for(i=0;i<=n;i++)
{
    cout<<"podaj a["<<i<<"]";
    cin>> a[i];
}


    cout<<"podaj wartosc x dla wielomianu";
    cin>>x;
    //------------------------------------
    w=a[0];
    for(i=1;i<=n;i++)
    {
    w=w*x+a[i];

    }
    cout<<"wartosc wielomianu ="<<w;
    return 0;
}
