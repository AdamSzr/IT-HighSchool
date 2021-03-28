#include <iostream>

using namespace std;
float a1,b1,a2,b2;


void  dane1(int a,int b)
{
int z=(a+b)/2;
cout <<z<<";";
}




int main()
{

cout <<" podaj wspozedne polozenia pkt 1 "<<endl<<"podaj a1= ";
cin >>a1;
cout <<"Podaj a2= ";
cin >>a2;



cout <<"podaj wsp polozenia pkt 2"<<endl<<"x1= ";
cin >>b1;
cout <<"Podaj x2= ";
cin >>b2;

cout <<endl<<" polozenia srodka odcinka to: ";
dane1(a1,a2);
dane1(b1,b2);



return 0;
}
