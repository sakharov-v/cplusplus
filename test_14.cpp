#include <iostream>
#include <cmath>
#include <windows.h>

using namespace std;

/* нахождение наибольшего общего делителя для двух целых чисел*/

/* алгоритм Евклида*/
int nod_evclid( int a, int b )
{
     while (a != b)
     {
          if (a > b)
          {
               a = a - b;
          }
          else 
          {
               b = b - a;
          }
     } 
     return a;  
}

/* рекурсия*/
int nod_recurs( int a, int b )
{
     if ( b == 0 )
     {
          return a;
     }

     return nod_recurs( b, a % b);

}

/* остаток*/
int nod_remain( int a, int b )
{
     int temp;

     while( b != 0 )
     {
          temp = b;
          b = a % b;
          a = temp;  
     }
     
     return a;

}

int nod_binar(int a, int b) {
	if (a == b)
		return a;
	if (a == 0)
		return b;
	if (b == 0)
			return a;
	if ((~a & 1) != 0) {
		if ((b & 1) != 0)
			return nod_binar(a >> 1, b);
		else
			return nod_binar(a >> 1, b >> 1) << 1;
	}
	if ((~b & 1) != 0)
		return nod_binar(a, b >> 1);
	if (a > b)
		return nod_binar((a - b) >> 1, b);
	return nod_binar((b - a) >> 1, a);
}

int main()
{
     int a, b;

     cout  << "введите два целых числа:" << endl;
     cin >> a >> b;

     cout << "Алгоритм Евклида  " << nod_evclid (a, b) << endl;
     cout << "Рекурсия  " << nod_recurs (a, b) << endl;
     cout << "Остаток  " << nod_remain (a, b) << endl;
     cout << "Бинарный алгоритм  " << nod_binar (a, b) << endl;
}