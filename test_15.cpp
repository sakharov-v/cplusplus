#include <iostream>
#include <cmath>
#include <ctime>
#include <windows.h>

using namespace std;

/*--------------------------------------------------------------------------
Имитация подбрасывания монеты
---------------------------------------------------------------------------*/

/* псевдослучайный результат подбрасывания*/
void flip(int count)
{
     int orel = 0; // 1 или true
     int reshka = 0; // 0 или false

     srand( time( 0 ) );
     
     for(int i = 1; i <= count; i++){
          
          int result = rand() % 2;

          if (result)
               orel++;
          else
               reshka++;

          // cout << result << " ";
     }

     orel = orel*100/count;
     reshka = reshka*100/count;
     
     cout << endl << "Орел выпал в " << orel << " % случаев" << endl;
     cout << "Решка выпала в " << reshka << " % случаев" << endl;
}

int main()
{
     flip( 100 );
     flip( 235 );
     flip( 2500 );
     flip( 100500 );
}