#include <iostream>
using namespace std;

bool szukaj(string s, string wzorzec, int T[], int &n)
{
  int dlT=s.length();
  int dlW=wzorzec.length();
  if (dlT<dlW) return false;
  n=0;
  int j;
  for(int i=0; i<dlT-dlW+1; i++)
  {
    for(j=i; j<i+dlW; j++)
      if(s[j]!=wzorzec[j-i]) break;  //jeœli wzorzec nie zgadza siê: break
    if(j==i+dlW)          //wzorzec znaleziony
    {
      T[n]=i;
      n++;                      
    }        
  }     
  if(n==0) return false;
  return true;   
}


int main(int argc, char** argv) 
{
	string s,wzorzec;
	int n=0, T[n];
	cout << "Podaj tekst: ";
	cin >> s;
	cout << "Podaj szukany wzorzec: ";
	cin >> wzorzec;
	
	if(szukaj(s,wzorzec,T,n))
	{
		cout << endl << "Liczba wystapien wzorca: " << n << endl;
		cout << "Pozycja(e) poczatkowe wzorca: ";
		for(int i=0; i<n; i++)
			cout << T[i] << "  ";
	}
	else
		cout << "Brak szukanego wzorca.";
	return 0;
}
