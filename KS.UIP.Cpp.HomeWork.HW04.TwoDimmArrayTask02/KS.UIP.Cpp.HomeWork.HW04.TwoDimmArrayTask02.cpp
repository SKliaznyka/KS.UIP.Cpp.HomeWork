// KS.UIP.Cpp.HomeWork.HW04.TwoDimmArrayTask02.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

//HomeWork 04. Task 02
//Input 2-Dimm Array. Input Method - Random
//Make two diagonals equal to ZERO.
//

#include "pch.h"
#include <iostream>
#include <Windows.h>
#include <iomanip>

//GLOBAL const:
const int iSIZE(7);

//FUNCTION declaration:
void InitTDArray(int ArrTD[][iSIZE], int size);
void OutputTDArray(int ArrTD[][iSIZE], int size);
void OutputTDArayZeroTwoDiagonal(int ArrTD[][iSIZE], int size);

//MAIN:
int main()
{
	int iArrayTD[iSIZE][iSIZE] = { 0 };

	std::cout << "------------- Homework 04. Task 02 -----------------" << std::endl;
<<<<<<< HEAD
	std::cout << "2D Array with main diagonal = 0" << std::endl << std::endl;
=======
	std::cout << "2D Array with main diagonal = 0" << std::endl << std::endl;
>>>>>>> 6c9084586f9a5a6adb6b46c80edbf0182d102a90

	InitTDArray(iArrayTD, iSIZE);

	std::cout << "Given Array:" << std::endl << std::endl;
	OutputTDArray(iArrayTD, iSIZE);

	std::cout << "Array with ZERO Two diagonals:" << std::endl << std::endl;
	OutputTDArayZeroTwoDiagonal(iArrayTD, iSIZE);

	return 0;
}


//FUNCTION body:
//VOIDs:
void InitTDArray(int ArrTD[][iSIZE], int size)
{
	srand(time(nullptr));
	for (int i = 0; i < size; ++i)
	{
		for (int j = 0; j < iSIZE; ++j)
		{
			ArrTD[i][j] = rand() % 10;
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

void OutputTDArayZeroTwoDiagonal(int ArrTD[][iSIZE], int size)
{
	for (int i = 0; i < size; ++i)
	{
		for (int j = 0; j < iSIZE; ++j)
		{
			ArrTD[i][j] = (i == j || i == -j + size - 1) ? 0 : ArrTD[i][j];
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
