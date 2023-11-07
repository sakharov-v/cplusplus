#include <iostream>
#include <iomanip>
#include <cmath>
#include <windows.h>
#include <ctime>
#include <string>

using namespace std;

/* вывод числа в обратном порядке*/

int rotate  (int a)
{
     int temp = 0;
     int rotate = 0;
     int i = 1;

     while (a > 0 )
     {
          rotate = rotate*10 + a % 10;
          a = a / 10;
     }

     return rotate;  
}

int main()
{
     SetConsoleCP( 1251 );
     SetConsoleOutputCP( 1251 );

     int a = 0;

     cout  << "введите целое число:" << endl;
     cin >> a ;

     cout << rotate (a) << endl;

     //cout << (int) ceil((8*sizeof(int)-1) * log10(2)) << endl;
}