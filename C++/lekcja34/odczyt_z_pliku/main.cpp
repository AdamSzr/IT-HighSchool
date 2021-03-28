#include <iostream>
#include <fstream>

using namespace std;
string wpis;


void Sortowanie(string wpis, int w )
{

    for( int i = 0; i < w; i++ )
    {
        for( int j = 0; j < w - 1; j++ )
        {
            if( wpis[ j ] > wpis[ j + 1 ] )
                 swap( wpis[ j ], wpis[ j + 1 ] );

        }
    }


cout<<wpis;

}

int main()
{


string poukladany="";
cin>>wpis;
Sortowanie(wpis,wpis.length());



    return 0;
}
