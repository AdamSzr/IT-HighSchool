#include <iostream>
#include <conio.h>
#include <cstdlib>
#include <windows.h>
#include <stdio.h>
using namespace std;


//http://edu.i-lo.tarnow.pl/inf/prg/006_gry/0025.php


//sta³e pomocnicze
const int BLACK        = 0;
const int BLUE         = 1;
const int GREEN        = 2;
const int CYAN         = 3;
const int RED          = 4;
const int MAGENTA      = 5;
const int BROWN        = 6;
const int LIGHTGRAY    = 7;
const int DARKGRAY     = 8;
const int LIGHTBLUE    = 9;
const int LIGHTGREEN   = 10;
const int LIGHTCYAN    = 11;
const int LIGHTRED     = 12;
const int LIGHTMAGENTA = 13;
const int YELLOW       = 14;
const int WHITE        = 15;

static int __BACKGROUND = BLACK;
static int __FOREGROUND = LIGHTGRAY;
//-------------------funkcje podobne jak PASCALU
// Ustawianie pozycji wydruku w oknie konsoli
void gotoxy(int y, int x)
{
  COORD c;
  c.X = x - 1;
  c.Y = y - 1;
  SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), c);
}

// Ustawinie koloru t³a wydruku
//----------------------------------------------------
void textbackground(int color)
{
  __BACKGROUND = color;
  SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),
    __FOREGROUND + (color << 4));
}

// Ustawianie kolor tekstu
//----------------------------------------------------
void textcolor(int color)
{
  __FOREGROUND = color;
  SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),
    color + (__BACKGROUND << 4));
}
//Czyszczenie ekranu
void clrscr()
{
  DWORD written;
  FillConsoleOutputAttribute(GetStdHandle (STD_OUTPUT_HANDLE),
    __FOREGROUND + (__BACKGROUND << 4), 2000, (COORD){0, 0}, &written);
  FillConsoleOutputCharacter(GetStdHandle(STD_OUTPUT_HANDLE), ' ',
    2000, (COORD){0, 0}, &written);
  gotoxy(1, 1);
}
//---WERSJA ZSLiT w Tucholi---------------------------------
const int ilew = 20;
const int ilek = 70;//wymiary planszy
int pl[ilew][ilek];  //plansza do gry
int pl_temp[ilew][ilek];//druga plansza do gry
//------------------------------------

void  start()//tworzy plansze
{

    clrscr();
    textbackground(BLACK);
    textcolor(YELLOW);
    gotoxy(1,30);
    cout<< "G R A  W  Z Y C I E";
    textbackground(LIGHTGRAY);
    for(int i=0;i<ilew;i++)
    {
        for(int j=0;j<ilek;j++)
        {
            pl[i][j]=0;
            pl_temp[i][j]=0;
            gotoxy(i+3,j+6);
            putch(' ');
        }
    }
    gotoxy(24,25);
    textbackground(BLACK);
    cout<<"d - dalej z- wyjscie";
}

 void posiew()
 {
                 pl[10][30]=1;
   pl[11][29]=1; pl[11][30]=1;pl[11][31]=1;
                 pl[12][30]=1;


 }

 void pokaz()
 {
     for (int i=0;i<ilew;i++)
     {
        for (int j=0;j<ilek;j++)
     {
          gotoxy(i+3,j+6);
          textbackground(LIGHTGRAY);
          if(pl[i][j]==0)
          {
              putch(char(32));
          }
          else
          {
              textcolor(GREEN);
              putch(char(64));
          }
     }
     }
 }








 int ile_sasiadow(int i, int j)
{
 int suma=0;
 suma=suma+pl[i-1][j-1]+pl[i-1][j]+pl[i-1][j+1];
 suma=suma+ pl[i][j-1]+             pl[i][j+1];
 suma=suma+pl[i+1][j-1]+pl[i+1][j]+pl[i+1][j+1];
 return suma;
}



//-------------------------
void oblicz()
{
  int stan;
  for (int i=1; i<ilew-1; i++)
    for (int j=1; j<ilek-1; j++)
      {
        stan=pl[i][j];
        if (stan==1)//komórka żyje
          {
            if ((ile_sasiadow(i,j)<2) || (ile_sasiadow(i,j)>3))
              stan=0;
          }
        else //komórka jest martwa
          {
            if (ile_sasiadow(i,j)==3)
              stan=1;
          }
        pl_temp[i][j]=stan;
      }
   //przepisanie tablic
   for (int i=0; i<ilew; i++)
    for (int j=0; j<ilek; j++)
       pl[i][j]=pl_temp[i][j];



}








int main()
{
start();
posiew();
pokaz();
char znak;
do
{
    znak=getchar();
    if(znak==char(100))
    {
        oblicz();
        pokaz();

    }
}
while(znak!=char(122));
	return 0;
}
