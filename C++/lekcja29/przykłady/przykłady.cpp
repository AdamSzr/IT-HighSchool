#include <iostream>
#include <windows.h>
#include <time.h>
using namespace std;

void f_wart(int x, int y)
{
  x=x+10; //do wartosci znajduj¹cej sie w zmiennej x dodaje liczbe 10;
  y=y+10;
}


void f_ref(int &x, int &y)
{
  x=x+10;
  y=y+10;
}


void f_wsk(int *x, int *y) // otrzymuje adresy gdzie najduje sie liczba x oraz liczba y
{
  *x=*x+10;
  *y=*y+10;
}


void f_tab1(int *wsk)
{
  for (int i=0; i<5; i++)
      wsk[i]=wsk[i]+10;
}

void f_tab2(int *wsk, int n)
{
  for (int i=0; i<n; i++)
    wsk[i]=wsk[i]+10;
}


int main()
{

int x=5,y=3;
f_wart(x,y);

cout<<"x = "<<x<<" y = "<<y<<endl;
f_ref(x,y);
cout<<"x = "<<x<<" y = "<<y<<endl;


cout<<endl<<"wskaznikowo"<<endl;
x=5;y=3;
/*
int *wsk=&x;
int *wsk1=&y;

cout<<"x = "<<*wsk<<" y = "<<*wsk1<<endl;
f_wsk(wsk,wsk1);
cout<<"x = "<<x<<" y = "<<y<<endl;*/


    f_wsk(&x,&y);
    cout<<"x = "<<x<<" y = "<<y<<endl;

    int tab[5]={1,2,3,4,5};
    f_tab1(tab);
    for(int i=0; i<5; i++)
    cout<<tab[i]<<" ";
    cout<<"\n\n";


    int n;
    cout<<"Ile elementow ma byc w tablicy:";
    cin>>n;
    int *wsk = new int[n];

   for(int i=0; i<n; i++)
      wsk[i]=i+1;

    f_tab2(wsk,n);

    for(int i=0; i<n; i++)
      cout<<wsk[i]<<" ";
    cout<<"\n\n";

    delete []wsk;



    return 0;
}
