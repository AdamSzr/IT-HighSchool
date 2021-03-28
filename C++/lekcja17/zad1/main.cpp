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
		losowana[i]=rand()%10+1;
		cout<<losowana[i]<<" ";
	}

     int czyjest=0;
    	for (int i=0;i<20;i++)
	{
		if (losowana[i]%7==0)
        {
            cout <<" Tak";return 0;

        }
        else
        {
              czyjest=czyjest+1;
        }


	}
    if (czyjest=20)
        {
            cout <<" nie ";return 0;

        }

	return 0;
}
