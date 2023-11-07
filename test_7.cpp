#include <iostream>
#include <iomanip>
#include <cmath>
#include <windows.h>
#include <format>

using namespace std;

const double PI = 3.14159;

float roundToInteger(float a)
{
     return floor( a + .5);
}

float roundToTenths(float a)
{
     return floor( a*10 + .5 ) / 10;
}

float roundToHundredths(float a)
{
     return floor( a*100 + .5 ) / 100;
}

float roundToThousandths(float a)
{
     return floor( a*1000 + .5 ) / 1000;
}

int main()
{
     SetConsoleCP( 1251 );
     SetConsoleOutputCP( 1251 );

     float a = 0;

     for (int i = 0; i < 5; i++)
     {
          cout << "¬ведите чисело дл€ округлени€:" << endl;
          cin >> a;
          cout << endl;

          ios flags(nullptr);     
          cout.width( 15 );
          cout.precision( 4 );
          cout.flags(ios::fixed);
          cout.fill('.');
          cout.setf(ios::right);
          flags.copyfmt(cout);
          // шапка таблицы
          cout << "„исло: " << a << endl;
          cout.copyfmt(flags);
          cout << "ќкругление" ;
          cout.copyfmt(flags);
          cout << "–езультат" << endl;
          
          // округление до целого      
          cout.copyfmt(flags);
          cout << "до целого" ;
          cout.copyfmt(flags);
          cout << roundToInteger(a) << endl;

          // округление до дес€тых      
          cout.copyfmt(flags);
          cout << "до дес€тых" ;
          cout.copyfmt(flags);
          cout << roundToTenths(a) << endl;

          // округление до сотых      
          cout.copyfmt(flags);
          cout << "до сотых" ;
          cout.copyfmt(flags);
          cout << roundToHundredths(a) << endl;

          // округление до тыс€чных      
          cout.copyfmt(flags);
          cout << "до тыс€чных" ;
          cout.copyfmt(flags);
          cout << roundToThousandths(a) << endl;
     }
}