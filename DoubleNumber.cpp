// DoubleNumber.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

// VariableWork.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream> // for std::cout and std::endl

//This Function double the variable it is given

int doubleNumber(int x)
{
	return x * 2;
}

//This function prints the passed variable

void printValues(int x)
{
	std::cout << x << std::endl;
}

//Takes in an integer provided from console and returns it's double

int main()
{
	std::cout << "Provide an Integer:";

	int x;

	std::cin >> x;
	int y = doubleNumber(x);
	printValues(y); // This function call has two arguments, 6 and 7

	return 0;
}
