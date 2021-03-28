#include <iostream>
void potrojenie(int ile, long tablica[ ]);    // 1
/*****************************************/
using namespace std;
main()
{
const int rozmiar = 8192 ;                   // 2
long widmo[rozmiar] ;                        // 3

  // -----nadanie wartoœci pocz¹tkowej
  for(int i = 0 ; i < rozmiar ; i ++)
  {
      widmo[i] = i ;                          //4
      if (i < 6)  // pokazanie pierwszych szeœciu
          cout << "i= " << i
               << ") " << widmo[i]
               << endl ;
  }
  // -----uwaga, wywo³ujemy funkcjê !
  potrojenie(rozmiar, widmo) ;                   // 5
  cout << "Po wywo³aniu funkcji \n" ;
  for(int i = 0 ; i < 4 ; i ++)
  {                                              // 6
    cout << "i= " << i
         << ") " << widmo[i] << endl;
  }
}
/*****************************************************/
void potrojenie (int ile, long t[])              // 7
{
  for(int i = 0 ; i < ile ; i++)
  {
      t[i] *= 3 ;                                // 8
  }
}
/*****************************************************/
