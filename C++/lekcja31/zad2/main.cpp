#include <iostream>

using namespace std;





int main()
{
int reszta;
int tab[14]={20000,10000,5000,2000,1000,500,200,100,50,20,10,5,2,1};
int spr[14];
cout <<"wpisz grosze";
cin >>reszta;
int i=0;
while (reszta>0)
{


        spr[i]=reszta/tab[i];
        reszta=reszta%tab[i];



  i++;
}



 cout <<"do wydania jest :"<<endl;
for (int z=0;z<14;z++)
{
   if (spr[z]!=0)
   {
        cout <<tab[z]<<"gr sztuk"<<spr[z]<<endl;
   }


}

    return 0;

}
