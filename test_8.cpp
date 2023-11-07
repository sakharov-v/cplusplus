#include <iostream>
#include <iomanip>
#include <cmath>
#include <windows.h>
#include <format>
#include <cstdlib>
#include <ctime>
#include <string>

using namespace std;

double hypotenuse(double c, double d)
{
     double e = sqrt( pow( c, 2 ) + pow( d, 2 ) );
     return e;
}

bool multiple (int t, int r)
{
     if (t % r)
          return false;
     else
          return true;
}

bool even (int q)
{
     if (q % 2)
          return false;
     else
          return true;
}

void printSquare (int y, const char *u)
{
     for ( int i = 0; i < y; i++ )
     {
          for ( int j = 0; j < y; j++ )
          {
               cout << setw ( 3 ) << u;                   
          }
          cout << endl;
     }
}

void myMfunc( int a, int b)
{
     if (a > 0 && b > 0)
     {
          if ( a < b )
          {
               int c = a;
               a = b;
               b = c;  
          }

          cout << "Целая часть от деления " << a << " на " << b << " равна: " ;
          cout << ceil ( a / b) * b;  

          cout << endl;
          cout << "Целый остаток от деления " << a << " на " << b << " равен: " ;
          cout << (a - ceil ( a / b) * b );

          cout << endl;
          string str = to_string( a );
          
          for ( int i = 0; i < str.length(); i++)
          {
               cout << setw( 3 ) << str[i] ;
          }
          cout << endl;
     }
     else 
     {
          cout << "Ошибка: деление на 0 " << endl;
     }
 

}

int main()
{
     SetConsoleCP( 1251 );
     SetConsoleOutputCP( 1251 );

     //setlocale( LC_ALL, "ru");

     double a = 0;

     srand(time( 0 ));

     // 1 <= n <= 2
     cout << " Случайные числа в диапазоне ( 1 <= n <= 2 )" << endl;
     for (int i = 0; i < 5; i++)
     {
          a = 1.0 + rand() % 2;

          cout << setw( 10 ) << a;
     }

     // 1 <= n <= 100
     cout << endl << endl << " Случайные числа в диапазоне ( 1 <= n <= 100 )" << endl;
     for (int i = 0; i < 5; i++)
     {
          a = 1 + rand() % 100;

          cout << setw( 10 ) << a;
     }

     // 0 <= n <= 9
     cout << endl << endl << " Случайные числа в диапазоне ( 0 <= n <= 9 )" << endl;
     for (int i = 0; i < 5; i++)
     {
          a = rand() % 10;

          cout << setw( 10 ) << a;
     }

     // 1000 <= n <= 1112
     cout << endl << endl << " Случайные числа в диапазоне ( 1000 <= n <= 1112 )" << endl;
     for (int i = 0; i < 5; i++)
     {
          a = 1000 + rand() % 113;

          cout << setw( 10 ) << a;
     }

     // -1 <= n <= 1
     cout << endl << endl << " Случайные числа в диапазоне ( -1 <= n <= 1 )" << endl;
     for (int i = 0; i < 5; i++)
     {
          a = (-1) + rand() % 3;

          cout << setw( 10 ) << a;
     }
     
     // -3 <= n <= 11
     cout << endl << endl << " Случайные числа в диапазоне ( -3 <= n <= 11 )" << endl;
     for (int i = 0; i < 5; i++)
     {
          a = (-3) + rand() % 15;

          cout << setw( 10 ) << a;
     }

     // 1 <= n <= 100 четные
     cout << endl << endl << " Случайные четные числа в диапазоне ( 1 <= n <= 100 )" << endl;
     for (int i = 0; i < 10; )
     {
          a = 1 + rand() % 100;

          if ( (int) a % 4 == 0)
          {
               cout << setw( 10 ) << a; 
               i++;
          }              
     }
     /*
     double c, d = 0;

     cout << endl;
     cout << "Введите длину катетов треугольника:" << endl;
     cin >> c >> d;  

     cout << "Гипотенуза равна:" << (int) hypotenuse( c, d ) << endl;  
     cout << ((int)log10(c)+1); 
     */

     /*
     cout << endl;
     cout << boolalpha << multiple( 81 , 9 ) << endl;
     cout << boolalpha << multiple( 8 , 3 ) << endl;
     cout << boolalpha << multiple( 8 , 2 ) << endl;
     cout << boolalpha << multiple( 11 , 2 ) << endl;

     */

    /*
    int i1, i2, i3, i4, i5, i6 = 0;

     cout << "Input six decimal" << endl;
     cin >> i1 >> i2 >> i3 >> i4 >> i5 >> i6;

     cout << boolalpha << even (i1) << endl;
     cout << boolalpha << even (i2) << endl;
     cout << boolalpha << even (i3) << endl;
     cout << boolalpha << even (i4) << endl;
     cout << boolalpha << even (i5) << endl;
     cout << boolalpha << even (i6) << endl;
     */

    cout << endl;
    printSquare( 5, "&" );

     myMfunc (1344641121, 50082);

}