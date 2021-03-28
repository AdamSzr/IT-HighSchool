#include <iostream>
#include <cstdlib>
#include <math.h>
#include <cstdio>
#include <windows.h>
using namespace std;
int i=0;
int main()
{
    int wpiszliczba;
    cin>>wpiszliczba;
    int kopia1=wpiszliczba;
    string wynik1;

    while(kopia1>0)
    {
        if(kopia1%2==0)
        {
        kopia1=kopia1/2;
        wynik1=wynik1+"0";
        }
        else
        {
        kopia1=kopia1/2;
        wynik1=wynik1+"1";
        }
    }

    int dl=wynik1.length();

    string poprawny;
    for(int i=dl-1;i>=0;i--)
    {
        poprawny=poprawny+wynik1[i];
    }

cout<<"binarne  "<<poprawny;
cout<<endl<<"-----------------"<<endl;

    int kopia2=wpiszliczba;



    string dziala;
    int pomoc;
    int ilerazy=0;
    while( kopia2 > 0 )
    {


        pomoc = kopia2 % 8;

        switch(pomoc)
        {
            case 0:dziala=dziala+"0"; break;
            case 1:dziala=dziala+"1"; break;
            case 2:dziala=dziala+"2"; break;
            case 3:dziala=dziala+"3"; break;
            case 4:dziala=dziala+"4"; break;
            case 5:dziala=dziala+"5"; break;
            case 6:dziala=dziala+"6"; break;
            case 7:dziala=dziala+"7"; break;

        }
        kopia2 /= 8;

        ilerazy++;

    }
     cout<<" liczba w systemie oktalnym ::";
    for(int i=ilerazy-1;i>=0;i--)
    {
        cout<<dziala[i];
    }
    cout<<endl<<"-----------------"<<endl;


        int kopia3=wpiszliczba;



    string dziala2;
    int pomoc3;
    int ilerazy2=0;
    while( kopia3 > 0 )
    {


        pomoc3 = kopia3 % 16;

        switch(pomoc3)
        {
            case 0:dziala2=dziala2+"0"; break;
            case 1:dziala2=dziala2+"1"; break;
            case 2:dziala2=dziala2+"2"; break;
            case 3:dziala2=dziala2+"3"; break;
            case 4:dziala2=dziala2+"4"; break;
            case 5:dziala2=dziala2+"5"; break;
            case 6:dziala2=dziala2+"6"; break;
            case 7:dziala2=dziala2+"7"; break;
            case 8:dziala2=dziala2+"0"; break;
            case 9:dziala2=dziala2+"1"; break;
            case 10:dziala2=dziala2+"A"; break;
            case 11:dziala2=dziala2+"B"; break;
            case 12:dziala2=dziala2+"C"; break;
            case 13:dziala2=dziala2+"D"; break;
            case 14:dziala2=dziala2+"E"; break;
            case 15:dziala2=dziala2+"F"; break;
        }
        kopia3 /= 16;

        ilerazy2++;

    }
     cout<<" liczba w systemie szesnastkowym ::";
    for(int i=ilerazy2-1;i>=0;i--)
    {
        cout<<dziala2[i];
    }
    cout<<endl<<"-----------------"<<endl;

system("pause");
    return 0;
}
