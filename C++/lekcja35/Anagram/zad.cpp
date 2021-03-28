#include <iostream>
#include <windows.h>
#include <time.h>
#include <cstdlib>
#include <string>
using namespace std;


void sortowanie(string &wpis,int dl )
{
    for( int i = 0; i < dl; i++ )
    {
        for( int j = 0; j < dl - 1; j++ )
        {
                 if( wpis[ j ] > wpis[ j + 1 ] )
                 swap( wpis[ j ], wpis[ j + 1 ] );

        }
    }


}

void dlugosci(string w1,string w2)
{
    if (w1.length()!=w2.length())
    {
        cout<<"NIE NIE NIE NIE NIE NIE";
        exit(0);

    }

}


void sprwart(string w1,string w2)
{
    for (int i=0;i<w1.length();i++)
    {
        if(w1[i]!=w2[i])
        {
            cout<< "NIE NIE NIE NIE NIE NIE ";
            exit(0);
        }
    }


}

int main()
{
string s1,s2;
cout<<"PODAJ WARTOSC 1: ";
cin>>s1;
cout<<endl<<"PODAJ WARTOSC 2:";
cin>>s2;

dlugosci(s1,s2);

sortowanie(s1,s1.length());
sortowanie(s2,s2.length());

sprwart(s1,s2);


cout<<"TAK";


    return 0;
}
