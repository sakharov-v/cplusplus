#include <iostream>
#include <iomanip>
#include <cmath>
#include <windows.h>
#include <ctime>
#include <string>

using namespace std;

/* ���������� ������������ ����� �� ����, ��������� �������������*/

double min_number (double a, double b, double c)
{
     double min = a;
     
     if( b < min)
          min =  b;
     
     if (c < min)
          min = c;
     
     return min;
}

int main()
{
     SetConsoleCP( 1251 );
     SetConsoleOutputCP( 1251 );

     double a, b, c = 0;

     cout  << "������� 3 ����� � ��������� ������:" << endl;
     cin >> a >> b >> c;

     cout << "����������� ����� �� ��������� ��� - " << min_number(a, b, c) << endl;

}