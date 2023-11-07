#include <iostream>
#include <iomanip>
#include <cmath>
#include <windows.h>
#include <ctime>
#include <string>

using namespace std;
/*������� ����������� ����������� � �������� � � ����������� � ������� � ����������� ����������� �����.
��������� ���������� ������ ������� � ����������� �� ������ ���� � ���������� ��������� �������*/

int fahrenheit (int f)
{
     return round(f * 9 / 5 + 32);
}

int celsius (int c)
{
     return round(c * 5 / 9 - 32);
}

int main()
{
     SetConsoleCP( 1251 );
     SetConsoleOutputCP( 1251 );

     //������ ������ ������� � ��������
     CONSOLE_SCREEN_BUFFER_INFO csbi;
     int columns;
     GetConsoleScreenBufferInfo(GetStdHandle(STD_OUTPUT_HANDLE), &csbi);
     columns = csbi.srWindow.Right - csbi.srWindow.Left + 1;

     columns = 110;
     
     int element_count = 180; // ���������� ��������� � �������
     int column_weight = 3; // ������ �������
     int table_column = 0; // ���������� ��������
     int table_string = 0; // ���������� �����
     
     // ������ ���������� �������� � ������� ��� �������� ������
     table_column = ceil(float(columns) / float(column_weight * 6));

     // ������ ���������� ����� � �������
     table_string = ceil( float (element_count) / float (table_column));

     cout <<  "columns = "  << columns << endl;
     cout <<  "table_column = "  << table_column << endl;
     cout <<  "table_string = "  << table_string << endl;

     int k = 32;

     for (int i = 0; i < table_string; i++)
     {
          for (int j = 0; j < table_column; j++)
          {
               int result = i + j * table_string + 32;

               if ( result <= element_count )
               {
                    cout << setw (column_weight)<< result << " F -> "
                         << setw (column_weight) << celsius ( result ) << " C ||";
               } else
               {
                     cout << setw (column_weight)<< " " << "      "
                          << setw (column_weight)<< " "<< "   ||";
               }

               k++;

          }

          cout << endl;

          if (k == element_count)
               break;
     }

    /* int k = 0;

     for (int i = 0; i < table_string; i++)
     {
          for (int j = 0; j < table_column; j++)
          {
               k++;
               int result = i + j * table_string;

               if ( result <= element_count )
               {
                    cout << setw (column_weight)<< result << " C -> "
                         << setw (column_weight) << fahrenheit ( result ) << " F ||";
               } else
               {
                     cout << setw (column_weight)<< " " << "      "
                          << setw (column_weight)<< " "<< "   ||";
               }

          }

          cout << endl;

          if (k == element_count)
               break;
     }
     */
}