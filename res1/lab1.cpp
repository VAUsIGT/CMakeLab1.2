int in = 21411183;      // целое число (−2**31 , 2**31-1)
long lo = -483647;      // целое число (-2**31 , 2**31-1)
short sh = 32767;       // целое число (-2**15 , 2**15-1)
float fl = -10.5;       // дробное число, на 8 символов  (-2**31 , 2**31-1)
double dou = 13.456;    // дробное число, на 16 символов (-2**63 , 2**63-1)
// 
//преписка unsigned позволяет переменной хранить только числа в положительном диапазоне

#include <iostream>
#include <windows.h>

float main()
{
	setlocale(LC_ALL, "Russian");

	HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(handle, FOREGROUND_GREEN);

	std::cout << "Введите площадь основания:";
	float s;
	std::cin >> s;
	float h;
	std::cout << "Введите высоту:";
	std::cin >> h;
	double v = (s * h)/3.0;
	std::cout << "Объём пирамиды: ";
	std::cout << v;
	std::cout << "\nСпасибо за использование технологий VAUsIGT\n-------------------------------------------";
	return 0;
}