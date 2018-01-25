// output.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <iomanip>

int main()
{
	std::cout.imbue(std::locale("en-US"));
	std::cout.setf(std::ios::right);
	std::cout.setf(std::ios::fixed);
	double W{ 36364.87 };
	double M{ 12431.33 };
	double E{ 127690.50 };
	double S{ 9200.00 };
	std::cout << std::setw(10) << "West:" << std::setw(2) << "$" << std::setw(10)
		<< std::setprecision(2) << W << std::endl << std::setw(10) << "Midwest:" <<
		std::setw(2) << "$" << std::setw(10) << M << std::endl << std::setw(10) << "East:" << std::setw(2) << "$" << std::setw(10) << E << std::endl
		<< std::setw(10) << "South:" << std::setw(2) << "$" << std::setw(10) << S << std::endl;
    return 0;
}

