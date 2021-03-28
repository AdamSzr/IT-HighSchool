#include <iostream>
#include <windows.h>
using namespace std;

int wybor,ile=0;

struct element
{
    string dane;
    element *wsk;// wsk do kolejnego elementu stosu
};

element *w=NULL; //wskaznik od wierzcholka stosu
element el; // element stosu
void pokaz_st()
{
system("cls");
element *wtemp=w;
while(wtemp)
{
    cout<<endl<<wtemp->dane;
    wtemp=wtemp->wsk;
}
cout<<endl<<"----------------"<<endl<<endl<<endl;

}
void push()  //**********************
{
cout<<"\npodaj tekst do dodania: ";
string tekst;
cin>>tekst;
element *temp=new element;//deklaracja nowego elementu
temp->dane=tekst;//nowy element dostaje dane
temp->wsk=w;//nowy element postaje adres dotychczasowego wierzcholka
w=temp;//aktualny wierzcho³ek
system("cls");
}

bool puste()
{
return !w;
}

void pop() //*******************
{
if(puste())
    {
        cout<<"Stos jest pusty!\n\n";
        Sleep(500);
    }
    else
    {
        int wartosc=MessageBox(
  0,
  "Czy napewno chcesz usunac element",
  "POP()",
  MB_OKCANCEL
);

 if (wartosc==1)
 {


        element *wtemp=w; //element na wierzchlku wstawiam do wte
        w=w->wsk;         // nowym wierzcholkiem jest w->wsk
        delete wtemp;     //uwuwam element ze stosu
        cout<<"Elemnet stosu zostal usuniety";
}
    }
}

int Rozm()
{
    int ile=0;
    element *wtemp=w;
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

    pokaz_st();
    cout<<"0. pokaz sztos "<<endl;
    cout<<"1. push"<<endl;
    cout<<"2. pop "<<endl;
    cout<<"3. size"<<endl;
    cout<<"4. empty "<<endl;
    cout<<"5. Koniec programu"<<endl;

    cout<<"WYBOR :";
    cin >>wybor;

    system("cls");
    switch(wybor)
    {
        case 0: pokaz_st();break;
        case 1: push();break;
        case 2: pop();break;
        case 3:
        cout<<"Na stosie lezy:"<<Rozm()<<" elementow";
        Sleep(2000);
        break;
        case 4: if(puste()==true)
        {
            cout<< "Stos jest pusty";
            Sleep(2000);

        }else
        {
            cout<<"Stos NIE jest pusty"<<endl;
            Sleep(2000);

        }
        ;break;


    }

}while(true);






	return 0;

}
