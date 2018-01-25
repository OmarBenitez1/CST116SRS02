// Input.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <iomanip>
int main()
{
	std::cout.setf(std::ios::scientific);
	double a;
	std::cout << "Enter a number: " << std::endl;
		std::cin >> a;
	std::cout << "In scientific notation it is: "<< a;
    return 0;
}

