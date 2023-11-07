#include <iostream>
#include <iomanip>
#include <cmath>
#include <windows.h>
#include <ctime>
#include <string>

using namespace std;

int main()
{
     SetConsoleCP( 1251 );
     SetConsoleOutputCP( 1251 );

     int time, min, sec = 0;
     
     cout << "¬ведите последовательно часы : минуты : секунды" << endl;
     cin >> time;

     if (time < 0 || time > 24)
     {
          cout << "„асы не могут быть меньше 0 и больше 23" << endl;
          return 1;
     } 

     cin >> min;

     if (min < 0 || min > 60)
     {
          cout << "ћинуты не могут быть меньше 0 и больше 59" << endl;
          return 1;
     } 
     
     cin >> sec;
     
     if (sec < 0 || sec > 60)
     {
          cout << "—екунды не могут быть меньше 0 и больше 59" << endl;
          return 1;
     } 

     cout << "— момента, когда часы были на 12 прошло, (сек): ";
     cout << ((time - ceil( time / 12) * 12 ) * 3600 + min * 60 + sec ) << endl;
}