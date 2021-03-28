#include <iostream>
#include <cstdlib>
#include <time.h>
using namespace std;
int main()
{
	int losowana[15];
	for (int i=0;i<15;i++)
    {
        cin >>losowana[i];
    }

	cout <<"liczby ktore  wpisales";
	for (int i=0;i<15;i++)
    {
        
        cout <<" "<<losowana[i];
    }
    int dzialaj;
    
    for (int i=0;i<15;i++)
    {
      if (losowana[i]>10)
      {
          cout <<"Jest wiekrza niz 10";return 0;
          
      }
      else
      {
      	dzialaj=dzialaj+1;
	  }
    }
    if (dzialaj==15)
    {
    	cout <<"nie bylo liczby wiekrzej od 10";
	}
    
	return 0;
}
