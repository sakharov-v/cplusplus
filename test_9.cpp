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
     
     cout << "������� ��������������� ���� : ������ : �������" << endl;
     cin >> time;

     if (time < 0 || time > 24)
     {
          cout << "���� �� ����� ���� ������ 0 � ������ 23" << endl;
          return 1;
     } 

     cin >> min;

     if (min < 0 || min > 60)
     {
          cout << "������ �� ����� ���� ������ 0 � ������ 59" << endl;
          return 1;
     } 
     
     cin >> sec;
     
     if (sec < 0 || sec > 60)
     {
          cout << "������� �� ����� ���� ������ 0 � ������ 59" << endl;
          return 1;
     } 

     cout << "� �������, ����� ���� ���� �� 12 ������, (���): ";
     cout << ((time - ceil( time / 12) * 12 ) * 3600 + min * 60 + sec ) << endl;
}