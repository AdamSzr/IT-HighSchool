#include <iostream>
#include <Math.h>
using namespace std;
float a1,b1,a2,b2,c1,c2;

float odcinka(int a1,int a2, int a3, int a4)
{
	float dl=sqrt(pow((a1-a3),2)+pow((a2-a4),2));
	return dl;

}


/*
bool  czy_moze(int i1,int i2, int i3)
{
    if (i1+i2>i3 && i3+i2>i1 && i1+i3>i2)
    {
     return true;
    }
    else
    {
        return false;
    }

}

*/


int main()
{



cout <<" podaj wsp 1 pkt "<<endl<<"podaj a1= ";
cin >>a1;
cout <<"Podaj a2= ";
cin >>a2;



cout <<"podaj wsp  pkt 2"<<endl<<"b1= ";
cin >>b1;
cout <<"Podaj b2= ";
cin >>b2;

/*
cout <<"podaj wsp pkt 3"<<endl<<"x1= ";
cin >>c1;
cout <<"Podaj x2= ";
cin >>c2;*/


float dlab=odcinka(a1,a2,b1,b2);
//float dlbc=odcinka(b1,b2,c1,c2);
//float dlca=odcinka(c1,c2,a1,a2);

//cout << "dlugosci odcinkow ab:" <<dlab<<" dlugosci odcinkow bc:"<<dlbc<< "dlugosci odcinkow ca:" <<dlca<<endl;















/*if (czy_moze(dlab,dlbc,dlca)==true)
{
    int obwod=dlab+dlbc+dlca;


     cout << "trojkat mozna zbudowac, Obwod tego trojkata wynosi "<<obwod;
}
else
{
    cout << "trojkat  nie istnieje ";
}
*/
 cout << "promien wynosi "<<dlab;


return 0;
}
