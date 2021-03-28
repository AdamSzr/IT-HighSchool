#include <iostream>

using namespace std;

class kwadrat{

string nazwa;
float bok;
int x,y;
string kolor;

public:
    void wpis()
    {
        cout<<"podaj nazwe";
        cin>>nazwa;
        cout<<"podaj dl boku";cin>>bok;
       cout<<"podaj pkt x y"; cin>>x;
        cin>>y;
        cout<<"podaj kolor";cin>>kolor;
    }
    void pokaz()
    {
        cout<<"nazwa: "<<nazwa;
        cout<<"dl boku: "<<bok;
        cout<<"pkt ("<<x<<","<<y<<")"<<endl;
        cout<<"kolor "<<kolor;
        cout<<endl<<endl;
    }
    void pole()
    {
        cout<<endl<<"pole kwadratu ="<<bok*bok<<endl;
    }
    kwadrat();

    kwadrat(string napis,float kr,int pktx,int pkty,string color);

     ~kwadrat();


};
kwadrat::kwadrat()
{
        nazwa="Kwadracik";bok=10;x=0;y=0;kolor="Black";

}

kwadrat::kwadrat(string napis,float kr,int pktx,int pkty,string color)
    {
        nazwa=napis;
        bok=kr;
        x=pktx;
        y=pkty;
        kolor=color;
    }

kwadrat::~kwadrat()
{
    cout<<endl<< this->nazwa<<" obiekt za chwile bedzie usuniety";
}

int main()
{
    kwadrat nr1;
    nr1.wpis();
    nr1.pokaz();
    nr1.pole();


    kwadrat nr2("nr 2",30,1,1,"red");
    nr2.pokaz();
    nr2.pole();

    kwadrat *kwdynamic=new kwadrat("nr 3 ",1,0,0,"white");
    kwdynamic->pokaz();
    kwdynamic->pole();

    delete kwdynamic;




    return 0;
}
