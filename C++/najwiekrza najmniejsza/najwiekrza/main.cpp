#include <iostream>
#include <cstdlib>
#include <time.h>
using namespace std;
int ile;

int main() 
{
	
	
	cout << "podaj ile chcesz liczb ";
	cin >>ile;
	srand(time(NULL));
	int losowane[ile]; 
	for (int x=0;x<ile;x++)
	{
		losowane[x]=rand()%102-100;
		cout <<losowane[x]<<endl;
		
	}
	
	
	
	
	int najw=losowane[0];
	for (int x=1;x<ile;x++)
	{
		
		if (najw>losowane[x]) //10>3
		{
			najw=losowane[x]; // warunek jest true wtedy sie wykona
			//losowanie najmniejszej liczny
		}
		
		
	}
	 cout <<endl<<endl<<endl<<"najmniejsza "<<najw<<endl;
		
	
	for (int x=1;x<ile;x++)
	{
		
		if (najw<losowane[x]) // 1<40 true 
		{
			najw=losowane[x];
			cout <<losowane[x]<<endl;
		}
		
	}	
 cout <<"najwyzsza "<<najw;
	
	
	
	
	
	
	
	
	return 0;
}
