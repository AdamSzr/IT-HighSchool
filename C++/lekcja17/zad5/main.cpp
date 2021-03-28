#include <iostream>
#include <cstdlib>
#include <time.h>
using namespace std;
int main()
{
	int losowana[20];
	srand(time(NULL));
	for (int i=0;i<20;i++)
	{
		losowana[i]=rand()%51;
		cout<<endl<<"liczba z inexem ["<<i<<"] "<<losowana[i]<<" ";
	}
    bool jest=true;


    int w=0;
    	for (w;w<20;w++)
	{
		if (losowana[w]==25)
	    {
	        jest=false;
	        break;
	    }

	}
    cout <<endl;
	if (jest==true)
    {
        cout <<" w tablicy nie bylo liczby 25";
    }
    else
    {
     cout <<" w tablicy jest liczba 25 pod inexem"<<w;
    }








	return 0;
}
