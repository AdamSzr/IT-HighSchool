#include <iostream>
#include <cstdlib>
#include <time.h>
using namespace std;
int main()
{
    int dl;
    cout<<"podaj ile liczb wylosowac ";
    cin>>dl;

	int losowana[dl];
	srand(time(NULL));
	for (int i=0;i<dl;i++)
	{
		losowana[i]=rand()%100+1;
		cout<<endl<<"liczba z inexem ["<<i<<"] "<<losowana[i]<<" ";
	}

    int najw;
    najw=losowana[0];
    int inex=0;
for (int i=1;i<dl;i++)
	{
		if (losowana[i]<najw)
        {
            najw=losowana[i];
            inex=i;
        }
	}

    cout  <<endl<<"najmniejsza liczba to:" <<najw<< " znajduje sie pod inexem: "<< inex;

	return 0;
}
