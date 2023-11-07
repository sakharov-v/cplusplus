#include <iostream>
#include <iomanip>
#include <cmath>
#include <windows.h>
#include <ctime>
#include <string>

using namespace std;
/*выводим соотношения температуры в градусах и в фаренгейтах в таблице с минимальным количеством строк.
Программа определяет размер таблицы в зависимости от ширины окна и количества элементов таблицы*/

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

     //узнаем ширину консоли в символах
     CONSOLE_SCREEN_BUFFER_INFO csbi;
     int columns;
     GetConsoleScreenBufferInfo(GetStdHandle(STD_OUTPUT_HANDLE), &csbi);
     columns = csbi.srWindow.Right - csbi.srWindow.Left + 1;

     columns = 110;
     
     int element_count = 180; // количество элементов в таблице
     int column_weight = 3; // ширина столбца
     int table_column = 0; // количество столбцов
     int table_string = 0; // количество строк
     
     // узнаем количество столбцов в таблице при заданной ширине
     table_column = ceil(float(columns) / float(column_weight * 6));

     // узнаем количество строк в таблице
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