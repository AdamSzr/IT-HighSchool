#include <iostream>
using namespace std;


string szyfruj(string tekst, int klucz[], int n)
{
    int m;
    if (tekst.length()%n==0){m=tekst.length()/n;} // jezeli dlugosc tekstu idealnie miesci sie w tablicy
    else{m=tekst.length()/n+1;}// przypisz wart dlugosci tekstu/n +1 dodatkowy wiersz który nie zostanie do konca wypeloniony




char tablica[m][n];
string nowy;
int w=0;
for (int i=0;i<m;i++)
{
    for (int x=0;x<n;x++)
    {

       tablica[i][x]=tekst[w];
       w++;
    }
}



 for (int x=0;x<n;x++)
    {
            for (int i=0;i<m;i++)
            {
                if (tablica[i][klucz[x]]!=0)
                {
                    nowy=nowy+tablica[i][klucz[x]];
                }


            }

    }

return nowy;
}

string deszyfr(string tekst, int klucz[], int n)
{
  string nowy;

  int m=tekst.length()/n;
  char tab[m][n];

  int k=0;

  for (int i=0;i<n;i++)
  {
      int l=klucz[i];

      for (int j=0;j<m;j++)
      {
          tab[j][l]=tekst[k];
          k++;
      }
  }

  for (int i=0;i<m;i++)
  {
      for (int j=0;j<n;j++)
      {
          nowy=nowy+tab[i][j];
      }
  }



    return nowy;
}


int main()
{

    string tekst;
    tekst="UCZCIWOSCZBIERAPOCHWALYIUMIERAZZIMNA";//<---36
    //cout<<"Podaj test do zaszyfrowania";cin>>tekst;
    int ilosc_kolumn;

    ilosc_kolumn=4;
    //cout<<"\npodaj ilosc kolumn;"cin>>ilosc_kolumn


    int klucz[]={3,2,0,1};
    //int klucz[ilosc_kolumn];
   /* for(int i=0;i<ilosc_kolumn;i++)
    {

        cout<<"\n podaj kolejnosc kolumn";cin>>klucz[i];
    }*/
    string zaszyfrowany=szyfruj(tekst,klucz,ilosc_kolumn);
   // cout<<endl;
   // cout<<zaszyfrowany;
    string nowystr=deszyfr(zaszyfrowany,klucz,ilosc_kolumn);
    cout<<nowystr;

	return 0;
}


