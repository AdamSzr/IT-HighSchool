#include <iostream>

using namespace std;



string usun_powt(string tekst)
{
     string nowy;
    if (tekst.length()==1)
   {
      return tekst;
   }
    else
    {
        int dl=tekst.length();
        nowy+=tekst[0];

        for (int i=1;i<dl;i++)
        {
            bool jest=false;
            for(int j=0;j<nowy.length();;j++)
            {
                if (tekst[i]==nowy[j])
                {
                    jest=true;
                }
                if (!jest)
                {
                    nowy=nowy+tekst[i];
                }
            }
        }

    }

	return nowy;
}

int main()
{

	string tekst;

	tekst="";
    cout<<usun_powt(tekst);
	return 0;
}
