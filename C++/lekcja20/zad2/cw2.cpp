#include <iostream>
#include <math.h>
#include <cstdlib>

using namespace std;

bool czy_lezy(float A, float B, float C, float x0, float y0)
{
	float d=fabs(A*x0+B*y0+C)/sqrt(A*A+B*B);
	if(d==0)
	{
	
	return true;
	}
	else
	{
	
	return false;
	}
}

//-------------------------------

int main()
{
	cout<<"Program sprawdza czy punkt le¿y na prostej"<<endl;
	
	float A,B,C,x0,y0;
	cout<<"Podaj A"<<endl;
	cin>>A;
	cout<<"Podaj B"<<endl;
	cin>>B;
	cout<<"Podaj C"<<endl;
	cin>>C;
	cout<<"Podaj x0"<<endl;
	cin>>C;
	cout<<"Podaj y0"<<endl;
	cin>>y0;
	
	if(czy_lezy(A, B, C, x0, y0))
	{
	 cout<<"lezy na prostej"<<endl;	
	}
	else
	{
		cout<<"nie lezy na prsostej"<<endl;	
	}
	


	return 0;
} 

