#include <iostream>
#include <cstdlib>
#include <time.h>
using namespace std;
int main()
{
	int losowana[10];
	srand(time(NULL));
	for (int i=0;i<10;i++)
	{
		losowana[i]=rand()%11-5;
		cout<<losowana[i]<<" ";
	}
    int  flaga=0;
    int brak=0;
    
    
    	for (int i=0;i<10;i++)
	{
		if (losowana[i]<0)
	    {
	        flaga=flaga+1;
	    }
	    else
	    {
	    	brak=brak+1;
		}
	}
	
	
if(brak==0)
{
	cout<<"brak liczb ponizej 0";
}
else
{
	cout <<"jest "<<flaga<<" liczb mniejszych od 0";
}
   	
	return 0;
}
