#include <iostream>
#include <cmath>
#include <iomanip>
#include <windows.h>

using namespace std;

#include <bitset>

/*--------------------------------------------------------------------------
                    Ханойская башня (циклическая реализация)
---------------------------------------------------------------------------*/

template <size_t  bitsetsize>
// ищем младший из установленных битов
int find_min_bit( bitset<bitsetsize> &A )
{
     for ( int i = 0 ; i < bitsetsize ; i++)
     {
          if(A.test(i))
               return i;
     }
     return -1;
}

template <size_t  bitsetsize>
void rotate (bitset<bitsetsize> &A, bitset<bitsetsize> &B)
{
     int posA = find_min_bit(A);
     int posB = find_min_bit(B);

     if (posA == -1 && posB == -1)
     {
          cout << "Сборка башни завершена!"<< endl;
          abort();
     }
     else if (posA != -1 && posB != -1)
     {
          if (posA > posB)
          {
               A.set( posB, true);
               B.set( posB, false);
          }
          else
          {
               B.set( posA, true);
               A.set( posA, false);
          }
     }
     else
     {
          if (posA > posB)
          {
               B.set( posA, true);
               A.set( posA, false);
          }
          else
          {
               A.set( posB, true);
               B.set( posB, false);
          }
     }
}

template <size_t  bitsetsize>
void hanoy( bitset<bitsetsize> &A, bitset<bitsetsize> &B, bitset<bitsetsize> &C )
{
     cout << "start" << endl;
     cout << A.to_string() <<" - "<< B.to_string() <<" - "<< C.to_string() << endl;
    
     while (!B.all() || !C.all()) {
          //cout << "loop" << endl;

          rotate (A , C);
          cout << A.to_string() <<" - "<< B.to_string() << " - " << C.to_string() << endl; 

          rotate (A , B);
          cout << A.to_string() << " - "<< B.to_string() << " - " << C.to_string() << endl; 

          rotate (B , C);
          cout << A.to_string() << " - " << B.to_string() << " - " << C.to_string() << endl;
     };
}

int main()
{
     // число дисков
     const int n = 7;
     
     // создаем пустые башни
     bitset <n> A, B, C;
 
     // заполняем первую башню дисками
     A = ~ A;

     hanoy(A, B, C);
}