#include <iostream>
#include <cmath>
#include <iomanip>
#include <windows.h>

using namespace std;

#include <bitset>

/*--------------------------------------------------------------------------
                    Ханойская башня (рекурсивная реализация)
---------------------------------------------------------------------------*/


template <size_t  bitsetsize>
void hanoy_recursion(int num, bitset<bitsetsize> &SRC, bitset<bitsetsize> &HLP, bitset<bitsetsize> &DST) {
     
     if (num == 1) {
          cout <<  SRC.set( 0, false).to_string() << " - " <<  HLP.to_string() << " - " <<  DST.set( 0, true).to_string() << endl;
          return;
     }

     hanoy_recursion(num - 1, SRC, DST, HLP);
     cout <<  SRC.set( num-1, false).to_string() << " - " <<  HLP.to_string() << " - " <<  DST.set(num-1, true).to_string() << endl;

     hanoy_recursion(num - 1, HLP, SRC, DST );

}
int main() {

     cout << "Начинаем перемещать диски. Погнали! " << endl;

     const size_t n = 3;

     // создаем пустые башни
     bitset <n> A, B, C;
     // заполняем первую башню дисками
     A = ~ A;
     
     hanoy_recursion(3, A, B, C);
     
     return 0;
}