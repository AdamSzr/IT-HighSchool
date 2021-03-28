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


string usun_spacje(string st)
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
		if(st[i]==' ')jest=true;
		if(!jest)
		{
			wynik+=st[i];
		}

	}
	return wynik;
	}
}

string alf_szyfrowy(char znak)
{
    string wynik;
    for (int i=0;i<26;i++)
    {
        wynik=wynik+znak++;
        if(znak>90)
        {
            znak=65;
        }
    }
    return wynik;
}

string deszyfruj(string szyfr, string klucz)
{

    int dl_klucza=klucz.length();
    int dl_szyfru=szyfr.length();

    string alfabet=usun_spacje("A B C D E F G H I J K L M N O P Q R S T U V W X Y Z");
    string wynik;

    for (int i=0;i<dl_szyfru;i++)
    {
        int nr_alfabetu=i%dl_klucza;
        string alf_szyfr=alf_szyfrowy(klucz[nr_alfabetu]);
        for (int j=0;j<26;j++)
        {
            if(szyfr[i]==alf_szyfr[j])
            {
                wynik=wynik+alfabet[j];
            }
        }
    }



return wynik;
}

int main()
{
string klucz=usun("KRYPTOLOGIA");
string do_odkodowania=usun_spacje("QEGTP XPYB PBRECBSYOMM ZFKHSQKKVIK BPORKOE");

cout<<"Klucz ----------------->"<<klucz<<endl<<endl;
cout<<"tekst do odkodowania -->"<<do_odkodowania<<endl;

string alf_szyf;
/*cout<<endl<<"ALFABETY SZYFROWE"<<endl;
    for (int i=0;i<klucz.length();i++)
    {
        alf_szyf=alf_szyfrowy(klucz[i]);
        cout<<alf_szyf<<endl;
    }*/


string wynik=deszyfruj(do_odkodowania,klucz);

cout<<"ODSZYFROWANE SLOWO ---->"<<wynik;

return 0;
}
