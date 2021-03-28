#include <iostream>

using namespace std;

int main()
{
    string napis;
    cout <<"podaj imie ";
    cin>>napis;

    int dl;
    dl=napis.length()-1;
    if(napis[dl]=='a')
    {
        cout <<"jestes kobieta";
    }
    else
    {
         cout <<"jestes mezczyzna";
    }






    return 0;
}
