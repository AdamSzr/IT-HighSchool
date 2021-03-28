#include <iostream>

using namespace std;
int n;


int w; //wynik
string bin;
int main()
{

    cout <<"podaj liczbe w dowolnym sysytemie z przedzialu <2;16>";
    cin >>bin;



	 n=bin.length()-1;
	 
	for (int i=0; i<n+1*2;i++)
	{
		 if(bin[i]=='A')
		{
			
			bin.erase(i,1);
			bin.insert(i,"10");
			
		}
		else if		(	bin[i]=='B'	)
		{
			bin.erase(i,1);
			bin.insert(i,"11");
		}
			else if		(	bin[i]=='C'	)
		{
			bin.erase(i,1);
			bin.insert(i,"12");
		}
			else if		(	bin[i]=='D'	)
		{
		bin.erase(i,1);
			bin.insert(i,"13");
		}
			else if		(	bin[i]=='E'	)
		{
			bin.erase(i,1);
			bin.insert(i,"14");
		}
			else if		(	bin[i]=='F'	)
		{
			bin.erase(i,1);
			bin.insert(i,"15");
		}
	}

	cout <<" nowy  string "<<bin;
   
    
    return 0;
}
