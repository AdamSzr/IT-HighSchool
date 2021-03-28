#include <iostream>

using namespace std;

void witaj(string x)
{
     cout<<"witaj "<<x<<"milo cie zobacyc";

}

string imie;


int main()
{

    cout <<"podaj imie";
    cin>>imie;
    cout <<"podaj ile razy napisac";
   int ile;
   cin>>ile;

   for (int i=0;i<ile;i++)
   {
        witaj(imie);
   }


}
