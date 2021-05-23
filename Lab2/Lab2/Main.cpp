#include <iostream>
#include <cstdlib>
#include <clocale>
#include "Algorithms.h"

int main()
{
	setlocale(LC_CTYPE, "Russian");

	std::cout << "fi(x):" << std::endl;
	for (double x = -1; x <= 1; x += 0.1)
	{
		std::cout << function_fi(x) << " |";
	}
	std::cout << std::endl;
	std::cout << "S(x):" << std::endl;
	for (double x = -1; x <= 1; x += 0.1)
	{
		std::cout << Spline(x, 4) << " |";
	}
	std::cout << std::endl;

	system("pause");
	return 0;
}