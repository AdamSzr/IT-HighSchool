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
		losowana[i]=rand()%7-1;
		cout<<losowana[i]<<" ";
	}
    int  tak=0;



    	for (int i=0;i<10;i++)
	{
		if (losowana[i]>0)
	    {
	        tak=tak+1;
	    }

	}


	if(tak!=10)
	{
		cout<<"nie!";
	}

   	else
   	{
		cout<<"tak !";
	}
	return 0;
}
