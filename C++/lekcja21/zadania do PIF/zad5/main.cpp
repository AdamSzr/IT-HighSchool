#include <iostream>
#include<time.h>
#include <cstdlib>
#include <windows.h>
using namespace std;
int rzut()
{
    srand(time(NULL));
    return rand()%6+1;
}
void scianka(int w)
{
    switch(w)
    {
    case 1: cout<<"ooo"<<endl<<"oxo"<<endl<<"ooo";break;
     case 2: cout<<"xoo"<<endl<<"ooo"<<endl<<"oox";break;
    case 3: cout<<"xoo"<<endl<<"oxo"<<endl<<"oox";break;
    case 4: cout<<"xox"<<endl<<"ooo"<<endl<<"xox";break;
 case 5: cout<<"xox"<<endl<<"oxo"<<endl<<"xox";break;
  case 6: cout<<"xxx"<<endl<<"ooo"<<endl<<"xxx";break;
    }

cout<<endl;

}




int main()
{


for(int i=0;i<5;i++)
{
   scianka(rzut());cout<<endl;
   Sleep(1000);
}
return 0;
}
