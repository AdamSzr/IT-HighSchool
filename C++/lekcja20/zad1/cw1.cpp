#include <iostream>
#include <math.h>
#include <cstdlib>

using namespace std;

float odl_punktu(float A, float B, float C, float x0, float y0)
{
	
	return fabs(A*x0+B*y0+C)/sqrt(A*A+B*B);
}

//-------------------------------

int main()
{
	cout<<"Program liczy odleglosc punktu od prostej"<<endl;
	
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
	
	cout<<"Odleglosc punktu od prostej: "<<odl_punktu(A, B, C, x0, y0)<<endl;
	


	return 0;
} 

