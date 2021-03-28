#include <iostream>
#include <windows.h>

using namespace std;

struct element
{
	int dane;
	element *wsk;
};

element *w=NULL; //wskaznik od wierzcholka stosu
element el; // element stosu

void push(int liczba)
{
		element *temp=new element;//deklaracja nowego elementu
		temp->dane=liczba;//nowy element dostaje dane
		temp->wsk=w;//nowy element powstaje adres dotychczasowego wierzcholka
		w=temp;//aktualny wierzcho³ek
}

int pop()
{
 		element *wtemp=w; //element na wierzchlku wstawiam do wte
 		int liczba=w->dane;//przepisuje liczbe z wierzcholka
        w=w->wsk;         // nowym wierzcholkiem jest w->wsk
        delete wtemp;     //usuwam element ze stosu
        return liczba;

}

void pokaz_stos()
{
		element *wtemp=w;
		while(wtemp)
		{
		    cout<<"\n"<<wtemp->dane;
		    wtemp=wtemp->wsk;
		}
		cout<<"\n-----------------\n\n\n";

      Sleep(2000);
      system("cls");
}

int main(int argc, char** argv)
{
	string wyrazenie="13423*+*+";

	int dl=wyrazenie.length();
	for(int i=0; i<dl; i++)
	{
		if(wyrazenie[i]>='0' && wyrazenie[i]<='9')
			push(wyrazenie[i]-48); //48 to kod ascii liczby
		else
		{
			int v1=pop();
			int v2=pop();
			switch(wyrazenie[i])
			{
				case '+': push(v2+v1); break;
				case '-': push(v2-v1); break;
				case '*': push(v2*v1); break;
				case '/': push(v2/v1); break;
			}
		}
		pokaz_stos();
	}
	cout<<"\n"<<wyrazenie<<" = "<<pop();



	return 0;
}
