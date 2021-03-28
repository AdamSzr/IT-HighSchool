#include <iostream>

#include <cmath>
using namespace std;











int main()
{

cout<<" podaj kolejno : liczba podpierwiastkowa, max liczba iteracji, dokladnosc obliczen";
float liczba,iter,dok;
cin>>liczba;
cin>>iter;
cin>>dok;


float a=liczba;
float i=0;

while (abs(a-(liczba/a))>dok && i<iter) // dopuki wart_bezwglêdna(a- (liczba/a) > dok³adnosc  && ilosc ruchów jest miejsza niz podnalismy
{
    a=0.5*(a+(liczba/a));
    cout<<"liczba a ="<<a<<endl;
    i=i+1;
}
cout <<" liczba pierwiastka ="<<a;



    return 0;
}
