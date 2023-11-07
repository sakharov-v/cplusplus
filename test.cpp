#include <iostream>
#include <windows.h>
#include "GradeBook.h"

using namespace std;

int main()
{
    SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

    GradeBook gradeB1( "CPP 1251: Программирование на С++" );
    GradeBook gradeB2( "C 4927 Программирование на С" );

    gradeB1.displayMessage();
    gradeB2.displayMessage();
};