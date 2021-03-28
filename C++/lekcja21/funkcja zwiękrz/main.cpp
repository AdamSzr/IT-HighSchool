#include <iostream>

using namespace std;


void zwieksz1(float formalny)
{
 formalny += 1000 ;     //zwiêkszenie liczby o 1000
 cout << "W funkcji modyfikuje argument formalny\n\t"
      << " i teraz argument formalny = " << formalny << endl;
}





int main()
{

float iii=100.3;
cout << "Przed wywo³aniem, aktu = " << iii << endl;
zwieksz1(iii) ;
cout << "Po wywo³aniu, aktu = " << iii << endl;



return 0;
}
