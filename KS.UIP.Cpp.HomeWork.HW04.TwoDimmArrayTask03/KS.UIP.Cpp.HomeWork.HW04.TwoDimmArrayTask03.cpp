// KS.UIP.Cpp.HomeWork.HW04.TwoDimmArrayTask03.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

//HomeWork 04. Task 03.
//Input 2-Dimm Array.
//Input method - random.
//Make Zero-Triangle creating with elements between two diagonals on left side.
//

#include "pch.h"
#include <iostream>
#include <Windows.h>
#include <iomanip>

//GLOBAL const:
const int iSIZE(19);

//FUNCTION declaration:
void InitZeroTriangleLeftTDArray(int ArrTD[][iSIZE], int size);
void OutputTDArray(int ArrTD[][iSIZE], int size);


//MAIN:
int main()
{
	int iArrayTD[iSIZE][iSIZE] = { 0 };

	std::cout << "------------- Homework 04. Task 03 -----------------" << std::endl;
	std::cout << "Draw 2D Array with Left Triangle = 0" << std::endl << std::endl;

	InitZeroTriangleLeftTDArray(iArrayTD, iSIZE);

	std::cout << "Array with Left Triangle = 0:" << std::endl << std::endl;
	OutputTDArray(iArrayTD, iSIZE);


	return 0;
}

//FUNCTION body:
//VOIDs:
void InitZeroTriangleLeftTDArray(int ArrTD[][iSIZE], int size)
{
	srand(time(nullptr));
	for (int i = 0; i < size; ++i)
	{
		for (int j = 0; j < iSIZE; ++j)
		{
			ArrTD[i][j] = (i >= j && i <= (-j + size - 1)) ? 0 : rand() % 10; 
		}
	}
}

void OutputTDArray(int ArrTD[][iSIZE], int size)
{
	for (int i = 0; i < size; ++i)
	{
		for (int j = 0; j < iSIZE; ++j)
		{
			std::cout << std::setw(3) << ArrTD[i][j];
		}
		std::cout << std::endl;
	}
	std::cout << "------------------------------" << std::endl << std::endl;
}


// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
