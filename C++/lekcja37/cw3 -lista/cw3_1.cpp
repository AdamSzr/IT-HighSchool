#include <iostream>
#include <cstdlib>
#include <fstream>

using namespace std;
 
 struct element
 {
 	string dane;//dane umieszczone w elemencie listy
 	element *wsk;//
 };
 //zmienne globalne

 element *pocz=NULL;
 
bool empty()
{
	return !pocz;
}

int size()
{
	int ile=0; 
	element* wtemp=pocz;
	while(wtemp)
	{
		ile++;
		wtemp=wtemp->wsk;
	}
	return ile;
}

void pokaz_liste()
{
	//SetConsoleTExtAttribute(GetStdHandle(STD_))
	element* wtemp=pocz;
	cout<<"\nO<-";
	while(wtemp)
	{
		cout<<wtemp->dane<<" ";
    	wtemp=wtemp->wsk;
	}
}
void dodaj_na_poczatek()
{
	cout<<"\nPodaj tekst: ";
	string tekst;
	cin>>tekst;
	
	element* p = new element;
	
	p->dane = tekst;
	p->wsk = pocz;
	pocz= p;
}

void dodaj_na_koniec()
{
	cout<<"\nPodaj tekst:";
	string tekst;
	cin>>tekst;
	
	element* p=pocz;
	element* e = new element;
	e->dane = tekst;
	e->wsk = NULL;
	
	if(p)
	{
		while(p->wsk) p = p->wsk;
		p->wsk = e;
	}
	else pocz = e;
}

void usun_z_poczatku()
{
if(empty()) cout<<"\nLista jest pusta!\n";
else
{
  element *p=pocz;
  if(p)
  {
  	pocz = p->wsk;
  	delete p;
  }
   cout<<"\nElement usuniety z poczatku listy!\n";
}


}

void usun_z_konca()
{
	if(empty()) cout<<"\nLista jest pusta!\n";
else
{
	element *p=pocz;
  	if(p)
  	{
  		if(p->wsk)
  		{
  			while(p->wsk->wsk) p = p->wsk;
  			delete p->wsk;
  			p->wsk = NULL;
		}
		else
		{
			delete p;
			pocz = NULL;
		}
	}
	cout<<"\nElement usuniety z konca listy!\n";
}



}

void sortuj()
{
	if (size()>=2)
	{
		element* temp;
		element* e1;
		element* e2;
		for(int i=1; i<size(); i++)
		{
			temp=pocz;
			for(int j=1; j<size(); j++)
			{
				e1=temp;
				e2=temp->wsk;
				if(e1->dane > e2->dane)
				{
					string s=e1->dane;
					e1->dane=e2->dane;
					e2->dane=s;
				}
				temp=temp->wsk;
			}
		}
	}
}

void zapis_do_pliku()
{
	ofstream wy("lista.txt");
	element* wtemp=pocz;
	while(wtemp)
	{
		wy<<wtemp->dane<<endl;
		wtemp=wtemp->wsk;
	}
	wy.close();
	cout<<"\nZapis do pliku lista.txt zakonczony!\n";
}

void odczyt_z_pliku()
{
	while(pocz) usun_z_poczatku();
	
	ifstream we("lista.txt");
	while(!we.eof())
	{
		string tekst;
		we>>tekst;
		if(tekst!="")
		{
			element* p=pocz;
			element* e = new element;
			e->dane = tekst;
			e->wsk = NULL;
	
		if(p)
			{
				while(p->wsk) 
				p = p->wsk;
				p->wsk = e;
			}
		else pocz = e;
		}
	
	
	}
	we.close();
	cout<<"\nOdczyt z pliku lista.txt zakonczony!\n";
}


int main(int argc, char** argv) 
{
	int wybor,ile=0;
do
{
	cout<<"MENU GLOWNE LISTY"<<endl;
	cout<<"--------------------------------"<<endl;
	cout<<"0. Pokazanie listy"<<endl;
	cout<<"1. Dodaje element do poczatku listy"<<endl;
	cout<<"2. Dodaje element na koncu listy"<<endl;
	cout<<"3. Usuwa element z poczatku listy"<<endl;
	cout<<"4. Usuwa element z konca listy"<<endl;
	cout<<"5. Sortowanie listy"<<endl;
	cout<<"6. Zapis listy do pliku"<<endl;
	cout<<"7. Odczyt listy z pliku"<<endl;
	cout<<"8. Podaje ile elementow jest na liscie"<<endl;
	cout<<"9. Sprawdza czy lista jest pusta"<<endl;
	cout<<"10. koniec programu"<<endl;
	cout<<"--------------------------------"<<endl;
	cout<<"Wybor: "<<endl;
	cin >> wybor;
	system("CLS");
	
	
	switch(wybor)
	{
		case 0: pokaz_liste(); break;
		case 1: dodaj_na_poczatek(); break;
		case 2: dodaj_na_koniec(); break;
		case 3: usun_z_poczatku(); break;
		case 4: usun_z_konca(); break;
		case 5: sortuj(); break;
		case 6: zapis_do_pliku(); break;
		case 7: odczyt_z_pliku(); break;
		case 8: ile=size(); 
				cout<<"\nIlosc elementow na liscie: "<<ile<<"\n";
				break;
		case 9: if(empty()) cout<<"\nLista jest pusta!\n\n";
				else cout<<"\nLista nie jest pusta\n\n";
				 break;
	}
}
while(wybor != 10);
while(pocz) usun_z_poczatku();
	
	return 0;
}
