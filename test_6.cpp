#include <iostream>
#include <iomanip>
#include <cmath>
#include <windows.h>

using namespace std;

const double PI = 3.14159;

double sphereVolume(double radius)
{
    return (4.0/3.0)*PI*pow( radius, 3 );
}

float calculateCharges(float time)
{
     static int i = 1;
     float charge = 0;

     if (time < 3.00)
          charge = 2.00;
     else {
          charge = ceil(time - 3) * 0.50 + 2.00;
          if (charge > 10.00)
               charge = 10.00;
     }

     ios flags(nullptr);
     
     cout.width( 11 );
     cout.precision( 2 );
     cout.fill(' ');
     cout.setf(ios::right);
     flags.copyfmt(cout);
     cout << i++ ;
     cout.copyfmt(flags);
     cout << time ;
     cout.copyfmt(flags);
     cout << charge << endl;

     return charge;
}

void showflags()
{
     ios::fmtflags flags;
     flags=cout.flags();
     if (flags & ios::skipws) cout<< "skipws enable\n";
     else cout<< "skipws disable\n";
     if(flags & ios::left) cout << "left enable\n";
     else cout << "left disable\n";
     if(flags & ios::right) cout << "right enable\n";
     else cout << "right disable\n";
     if(flags & ios::internal) cout << "internal enable\n";
     else cout << "internal disable\n";
     if(flags & ios::dec) cout << "dec enable\n";
     else cout << "dec disable\n";
     if(flags & ios::oct) cout << "oct enable\n";
     else cout << "oct disable\n";
     if(flags & ios::hex) cout << "hex enable\n";
     else cout << "hex disable\n";
     if(flags & ios::showbase) cout << "showbase enable\n";
     else cout << "showbase disable\n";
     if(flags & ios::showpoint) cout << "showpoint enable\n";
     else cout << "showpoint disable\n";
     if(flags & ios::showpos) cout << "showpos enable\n";
     else cout << "showpos disable\n";
     if(flags & ios::uppercase) cout << "uppercase enable\n";
     else cout << "uppercase disable\n";
     if(flags & ios::scientific) cout << "scientific enable\n";
     else cout << "scientific disable\n";
     if(flags & ios::fixed) cout << "fixed enable\n";
     else cout << "fixed disable\n";
     if(flags & ios::unitbuf) cout << "unitbuf enable\n";
     else cout << "unitbuf disable\n";
     if(flags & ios::boolalpha) cout << "boolalpha enable\n";
     else cout << "boolalpha disable\n";
     cout << "\n";
}

int main()
{
     SetConsoleCP( 1251 );
     SetConsoleOutputCP( 1251 );

     float t1, t2, t3 = 0;
   
     cout << "Введите время стоянки для 3-х машин:" << endl;
     cin >> t1 >> t2 >> t3;

     float total_charges = 0;
     
     ios flags(nullptr);
     
     cout.width( 11 );
     cout.precision( 2 );
     cout.fill('-');
     cout.setf(ios::right);
     flags.copyfmt(cout);
     
     cout << "Машина" ;
     cout.copyfmt(flags);
     cout << "Время" ;
     cout.copyfmt(flags);
     cout << "Стоимость" << endl;

     total_charges += calculateCharges(t1);    
     total_charges += calculateCharges(t2);    
     total_charges += calculateCharges(t3);    

     cout.copyfmt(flags);
     cout << "ИТОГО" ;
     cout.copyfmt(flags);
     cout << (t1 + t2 + t3) ;
     cout.copyfmt(flags);
     cout << total_charges << endl; 

     //cout << format("{:032b} \n", cout.flags());   

     //showflags();


   /* double radius;

    cout << "Введите радиус шара:";
    cin >> radius;
    cout << "Объем шара с радиусом" << radius << "равен"
         << sphereVolume(radius) << endl; 
     */

   /* cout << fixed << setprecision(3); 

    cout << "Округление х до наименьшего целого, не меньшего х."
         << "\n ceil( 9.2345 ) = " << ceil( 9.2345 )
         << "\n ceil( -9.8653 ) = " << ceil( -9.8653 ) << endl;

    cout << "Тригонометрический косинус х (х в радианах)."
         << "\n cos( 0.0 ) = " << cos( 0.0 ) << endl;

    cout << "Экспоненциальная функция ех."
         << "\n exp( 1.023 ) = " << exp( 1.023 )
         << "\n exp( 2.000 ) = " << exp( 2.000 ) << endl;   

    cout << "Абсолютное значение."
         << "\n fabs( 5.120 ) = " << fabs( 5.120 )
         << "\n fabs( 0.000 ) = " << fabs( 0.000 )
         << "\n fabs( -8.7652 ) = " << fabs( -8.7652 ) << endl;
    
    cout << "Округление х до наибольшего целого, не превосходящего х."
         << "\n floor( 9.2 ) = " << floor( 9.2 ) 
         << "\n floor( -9.8263 ) = " << floor( -9.8263 ) << endl;

    cout << "Остаток х/у как число с плавающей точкой."
         << "\n fmod( 2.6, 1.2 ) = " << fmod( 2.6, 1.2 ) << endl;

    cout << "Натуральный логарифм х по основанию е."
         << "\n log( 2.718282 ) = " << log( 2.718282 )
         << "\n log( 7.389056 ) = " << log( 7.389056 ) << endl;
    
    cout << "Десятичный логарифм х по основанию 10."
         << "\n log10( 10.0 ) = " << log10( 10.0 )
         << "\n log10( 100.0 ) = " << log10( 100.0 ) << endl;

    cout << "Х в степени у."
         << "\n pow( 2, 188.54) = " << pow( 2, 188.54 )
         << "\n pow( 9, 0.5 ) = " << pow( 9, 0.5 ) << endl;

    cout << "Тригонометрический синус х (х в радианах)."
         << "\n sin( 0.0 ) = " << sin( 0.0 ) << endl;

    cout << "Корень квадратный (х - неотрицательное значение)."
         << "\n sqrt( 9.0 ) = " << sqrt( 9.0 )
         << "\n sqrt( 13.9999 ) = " << sqrt( -13.9999 ) << endl;

    cout << "Тригонометрический тангенс (х в радианах)."    
         << "\n tan( 0.0 ) = " << tan( 0.0 ) << endl;
    */
    
    /*double hypotenuse(double side1, double side2);
    int smalltest(int x, int y, int z);
    void instruction(void);
    double intToDouble(int numder);

    register int count = 0;
    static double lastVal = 0;
    */


}