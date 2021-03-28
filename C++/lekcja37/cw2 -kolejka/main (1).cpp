#include <iostream>
#include <windows.h>
using namespace std;

int wybor,ile=0;

struct element
{
    string dane; //dane w kolejce
    element *wsk; // wskaznik na kolejny element w kolejce
};
element *pocz=NULL;
element *kon=NULL;

void pokaz_kolejke()
{

element *wtemp=pocz;

while (wtemp)
{
    cout<<wtemp->dane<<" ";
    wtemp=wtemp->wsk;
}



cout<<endl<<endl<<endl;
Sleep(500);
}

void dodaj()
{
    element *temp=new element;

    cout<<"Podaj wartosc ";
    string wpis;
    cin>>wpis;
    temp->dane=wpis;
    temp->wsk=NULL;

        if(kon==NULL)
        {
            pocz=temp;
        }
        else
        {
            kon->wsk=temp;
        }
    kon=temp;
 system("cls");
}

 bool puste()
 {
    if (pocz==NULL)
    {
        return true;
    }
    else
    {
        return false;
    }

 }
void usun()
{
if (!puste())
{
  element *wtemp=pocz;
   delete wtemp;
   pocz=wtemp->wsk;
   kon=wtemp->wsk;
}
else
{
    cout<<"Brak kolejki";
}


}

int Rozm()
{
int ile=0;
element *wtemp=pocz;
while(wtemp)
{
    ile++;
    wtemp=wtemp->wsk;

}
return ile;

}

int main()
{

do
{

    pokaz_kolejke();
    cout<<"0. pokaz stos "<<endl;
    cout<<"1. Dodaj do kolejki"<<endl;
    cout<<"2. Usun z kolejki "<<endl;
    cout<<"3. size"<<endl;
    cout<<"4. empty "<<endl;
    cout<<"5. Koniec programu"<<endl;

    cout<<"WYBOR :";
    cin >>wybor;

    system("cls");
    switch(wybor)
    {
        case 0: pokaz_kolejke();break;
        case 1: dodaj();break;
        case 2: usun();break;
        case 3:
        cout<<"w Kolejce czeka: "<<Rozm()<<" elementow";
        Sleep(2000);
        break;
        case 4: if(puste()==true)
        {
            cout<< "Stos jest pusty";
            Sleep(2000);

        }
        else
        {
            cout<<"Stos NIE jest pusty"<<endl;
            Sleep(2000);

        }
        ;break;


    }

}while(wybor!=5);

while (pocz)
{
    usun();
}






	return 0;

}
