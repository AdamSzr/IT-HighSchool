#include <iostream>
#include <windows.h>
#include <time.h>
#include <algorithm>
using namespace std;


void f_tab2(int *wsk, int n)
{
    for(int i=0; i<n-1; i++)
    {

        for(int j=0; j<n-1; j++)
        {

            if(*(wsk+j+1)<*(wsk+j))
            {

                swap(*(wsk+j+1),*(wsk+j));

            }
        }
    }
}

void wpis(int *tab,int n)
{
    srand(time(NULL));
    for(int i=0;i<n;i++)
    {
        *(tab+i)=rand()%1000;
    }


}
void wyswiet(int *tab, int n)
{

    for(int i=0;i<n;i++)
    {
        cout<<*tab<<" ";
        tab++;
    }


}




int main()
{


    int n;
    cout<<"Ile elementow ma byc w tablicy:";
    cin>>n;
    int *wsk = new int[n];
    wpis(wsk,n);
    wyswiet(wsk,n);

cout <<endl<<"-----------------------------------------"<<endl;
    f_tab2(wsk,n);
    wyswiet(wsk,n);


    delete []wsk;



    return 0;
}
