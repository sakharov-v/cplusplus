#include <iostream>
#include <iomanip>
#include <cmath>
#include <windows.h>
#include <ctime>
#include <string>

using namespace std;

/* ���������� ����������� ����� � �������� ���������*/

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
               //cout << i << " �������� ��������� ��� ����� " << a << endl;
          }    
               
     }

    /* if (s)
     {
          cout <<" ����� " << a << " ����� " << s << " ���������." << endl;
     }
     else
     {
          cout <<" ����� " << a << " ������� ������ �� 1 � �� ���� ����." << endl;
     }*/
     
     if (a == sum + 1)
     {
          cout <<" ����� " << a << " �������� �����������!" << endl;
     }
     
}

int main()
{
     SetConsoleCP( 1251 );
     SetConsoleOutputCP( 1251 );

   //  int a = 0;

     //cout  << "������� ����� �����:" << endl;
    /// cin >> a ;

     for (int e = 1; e <= 1000; e++ )
          perfect( e );
     

}