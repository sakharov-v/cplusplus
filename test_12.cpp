#include <iostream>
#include <iomanip>
#include <cmath>
#include <windows.h>
#include <ctime>
#include <string>

using namespace std;

/* нахождение совершенных чисел в заданном диапазоне*/

void perfect (int a)
{
     int n = ceil( sqrt (a) );

     int s = 0;
     int sum = 0;

     for (int i = 2; i < a; i++ )
     {
          if (a % i == 0)
          {
               s++;
               sum += i;
               //cout << i << " €вл€етс€ делителем дл€ числа " << a << endl;
          }    
               
     }

    /* if (s)
     {
          cout <<" „исло " << a << " имеет " << s << " делителей." << endl;
     }
     else
     {
          cout <<" „исло " << a << " делитс€ только на 1 и на само себ€." << endl;
     }*/
     
     if (a == sum + 1)
     {
          cout <<" „исло " << a << " €вл€етс€ совершенным!" << endl;
     }
     
}

int main()
{
     SetConsoleCP( 1251 );
     SetConsoleOutputCP( 1251 );

   //  int a = 0;

     //cout  << "введите целое число:" << endl;
    /// cin >> a ;

     for (int e = 1; e <= 1000; e++ )
          perfect( e );
     

}