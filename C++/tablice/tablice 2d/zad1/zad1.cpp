#include <iostream>
using namespace std;

//string tab[3][3];//
 

int main()
{ /*
	cout << "wporwadz elementy do ";
	for (int x=0; x<3;x++)
	{
			for( int z=0; z<3;z++)
			{
				cin>>tab[x][z];
			}
	}									to jest na wpisywanie
	
		for (int x=0; x<3;x++)
	{
			for( int z=0; z<3;z++)
			{
				cout<<" "<<tab[x][z];
			}
		cout <<endl;
	}*/
	
	char tab[3][3]=
	{ 
	'x','o','x'
	,'x','o','x'
	,'x','x','x'
	};
	
	for (int x=0; x<3;x++)
	{
			for( int z=0; z<3;z++)
			{
				cout<<" "<<tab[x][z];
			}
	cout <<endl;
	}
	
	return 0;
}
