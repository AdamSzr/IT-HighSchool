#include <iostream>
#include <algorithm>



using namespace std;

int main()
{

int n=4;
int p=3;
int tab[n]={7, 5, 11, 33 };

int nowe[n]={};
int it=0;

for (int i=0;i<n;i++)
{
    if (tab[i]%p!=0)
    {
        nowe[it]=tab[i];
        it++;
    }
}

for (int i=0;i<n;i++)
{
   cout<<" "<<nowe[i];
}

cout<<"--------------"<<endl;

for (int i=0;i<n-1;i++)
{
    for (int j=0;j<n-1;j++)
    {
        if (nowe[j]<nowe[j+1])
    {
        swap(nowe[j],nowe[j+1]);
    }
    }
}


cout<<"POLE Prostokata wynosi: "<<nowe[0]*nowe[1];


return 0;

}
