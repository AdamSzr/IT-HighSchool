#include <iostream>

using namespace std;



int main()
{



int *wsk_i= new int ; //narodziny zmiennej dynamicznej
cout << "komorka w pamieci" <<wsk_i<< endl;
*wsk_i = 20;   //umieszczenie wartości w zm.dynamicznej
cout << "Wartosc wskazywana =" << *wsk_i<<endl;  //wypisanie zm.dynamicznej
delete wsk_i; //usuwanie zmiennej





long *w=new long;
cout<<"komorka w pamieci"<<w;
*w=1000;
cout<<" -- >Wartosc wskazywana "<<*w<<endl;
delete w;

char *ww= new char;
cout<<"komorka w pamieci"<<ww;
*ww='S';
cout<<" -- >Wartosc wskazywana "<<*ww<<endl;
delete ww;

string *www= new string;
cout<<"komorka w pamieci"<<www;
*www="Tablica dynamiczna";
cout<<" --> Wartosc wskazywana :"<<*www<<endl;
delete www;



	return 0;
}
