#include <iostream>
void potrojenie(int ile, long tablica[ ]);    // 1
/*****************************************/
using namespace std;
main()
{
const int rozmiar = 8192 ;                   // 2
long widmo[rozmiar] ;                        // 3

  // -----nadanie warto�ci pocz�tkowej
  for(int i = 0 ; i < rozmiar ; i ++)
  {
      widmo[i] = i ;                          //4
      if (i < 6)  // pokazanie pierwszych sze�ciu
          cout << "i= " << i
               << ") " << widmo[i]
               << endl ;
  }
  // -----uwaga, wywo�ujemy funkcj� !
  potrojenie(rozmiar, widmo) ;                   // 5
  cout << "Po wywo�aniu funkcji \n" ;
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
