#include <iostream>
#include <cstdlib>

using namespace std;

string usun(string st)
{
	if(st.length()==1) return st;
	else
	{
	string wynik="";
	int	dl=st.length();
	wynik+=st[0];
	for(int i=1; i<dl; i++)
	{
		bool jest=false;//nie powtarza sie;
		for(int j=0; j<wynik.length(); j++)
		if(st[i]==wynik[j]|| st[i]==' ')jest=true;
		if(!jest)
		{
			wynik+=st[i];
		}

	}
	return wynik;
	}
}
string alfabet_szyfrowy(string st)
{
	string alfabet="ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	string wynik=st;
	int dl=alfabet.length();
		for(int i=1; i<dl; i++)
	{
		bool jest=false;//nie powtarza sie;
		for(int j=0; j<wynik.length(); j++)
		if(alfabet[i]==wynik[j])jest=true;
		if(!jest)
		{
			wynik+=alfabet[i];
		}
	}
	return wynik;
	}

string deszyfruj(string szyfr, string alf)
{
    string alfabet="ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	string wynik;
	int dl=szyfr.length();
		for(int i=0; i<dl; i++)
	{
	    for (int j=0;j<alf.length();j++)
        {
            if (alf[i]==szyfr[j])
                wynik+=alfabet[j];

        }
	}
    return wynik;
}

int main()
{
 string tekst="NIE MA REGULY BEZ WYJATKU";
 string st=usun(tekst);
//alf szyfrowy
 cout<<"Po usunieciu powtorzen "<<st<<endl;

 string alf=alfabet_szyfrowy(st);
 cout<<"Alfabet szyfrowy "<<alf<<endl;

string szyfr="UCRTYOKNMCUKHGQZTBMWZQJXKQJMKDFY";
string jawy=deszyfruj(szyfr,alf);
cout<<"\n\n\n"<<jawy;

return 0;
}
