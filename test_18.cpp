#include <iostream>
#include <cmath>
#include <iomanip>
#include <string>
#include <Windows.h>
#include <clocale>

using namespace std;

/*--------------------------------------------------------------------------
                    Массивы, векторы
---------------------------------------------------------------------------*/
int main() {
 
    setlocale(LC_ALL, "");

/*     srand( time( 0 ) );

    double b[34];
    double a[11];
    //float sum = 0;
    double max = 0;
    double min = 1000;
    for (int i = 0; i < 35; i++)
    {
        if(i < 11 )
            a[i] = (double)rand()/(double)rand();
        b[i] = (double)rand()/(double)rand();

        if(max < b[i])
            max = b[i];
        
        if(min > b[i])
            min = b[i];
    }
    
    cout << endl;
    cout << "Массив B: " << a << endl;
    for (int i = 0; i < 35; i++)
    {
        cout << setw(5) << b[i] << " ";
    }
    
    cout << endl;
    cout << "Максимальное значение: " << max << endl;
    cout << "Минимальное значение: " << min << endl;



    cout << endl;
    cout << "Массив А: " << a << endl;
    for (int i = 0; i < 11; i++)
    {
        cout << setw(5) << a[i] << " ";
    }
    cout << endl;

    //std::copy( std::begin(a), std::end(a), std::begin(b)); */


/*     int m[3][4] = {0};

    
    for( auto &row : m)
        for( auto &col : row){
            cout << "Введите значение элемента массива" << endl;
            cin >> col ;
        }
    cout << endl;


    //печать двумерного массива  (цикл For основанный на диапазоне с++11 - синтаксис)
    for( auto &row : m){
        for( auto col : row){
            cout << col << ' ';
        }
    cout << endl;
    }

    cout << endl; */

    /* Отчет о заработной плате */

    /* srand( time(0) );
    int arr[9] = { 0 }; 
    for (int i = 0; i < 1000; i++){
        int zp = rand() % (1500 - 200 + 1) + 200; //считаем что зп в диапазоне от 200 до 1500 $
        arr[(int)floor(zp/100)-2]++;
    }

    for (int i = 0; i < 9; i++){
        
        if (i == 8)
            cout << i+1 << ". " << setw(5) << '$' << (i+2)*100 << "-$1500     ";
        else
            cout << i+1 << ". " << setw(5) << '$' << (i+2)*100 << '-' << '$' << (i+2)*100+99 << "     ";
        
        for( int c = 0; c < arr[i]; c++)
            cout << '*';
        cout << endl;
    }   */ 

    /* Пузырьковая сортировка */

    srand( time(0) );
    
    int arr[50] = {0};
    
    cout << "Несортированный массив" << endl;

    for(int i = 0; i < 50; i++){
        arr[i] = rand() % 1000;
        cout << setw(4) << arr[i];
    }
    cout << endl;
    
    /*  
    // сортировка пузырьком
    for(int i = 0; i < 50; i++){
        for(int j = 0; j < 49; j++){
            if (arr[j] > arr[j+1]){
                int buffer = arr[j+1];
                arr[j+1] = arr[j];
                arr[j] = buffer;
            }
        }
    }
    */ 

    // сортировка пузырьком 2
    for(int i = 0; i < 50; i++){
        for(int j = 0; j < 49-i; j++){
            if (arr[j] > arr[j+1]){
                int buffer = arr[j+1];
                arr[j+1] = arr[j];
                arr[j] = buffer;
            }
        }
    }

    cout << "Сортированный массив" << endl;

    for(int i = 0; i < 50; i++){
        cout << setw(4) << arr[i];
    }
    cout << endl;

}