// KS.UIP.Cpp.HomeWork.HW04.TwoDimmArrayTask09.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

//HomeWork 04. Task 09.
//Init 2D Array.
//Init method - Spiral Sequence.
//Start point - [0,0].
//Sequence direction: Ascend.
//


#include "pch.h"
#include <iostream>
#include <iomanip>

//Global constants:
const int iSIZE = 3;

//FUNCTION Declarations:
void InitTDArraySequence(int ArrayTD[][iSIZE], int size);
void OutputTDArray(int ArrayTD[][iSIZE], int size);

void InitTDArraySpiralSequence(int ArrayTD[][iSIZE], int size);

//MAIN:
int main()
{
	int iArrayTD[iSIZE][iSIZE] = { 0 };

	std::cout << "HW 04. Task 09. Array Initiated as Spiral:" << std::endl;
	
	InitTDArraySequence(iArrayTD, iSIZE);
	OutputTDArray(iArrayTD, iSIZE);

	InitTDArraySpiralSequence(iArrayTD, iSIZE);

	return 0;
}

//FUNCTION body:
void InitTDArraySpiralSequence(int ArrayTD[][iSIZE], int size)
{
	int iCount(0);
	int iSequence(0);
	int iRaw(0),
		iCol(0);
	int iMin(0),
		iMax(0),
		jMin(0),
		jMax(0);
	if (size % 2 == 0)  //Even Array Size
	{
		while (iRaw <= size / 2 && iCol <= size / 2 - 1 && iCount <= size * 2 - 1)
		{
			while (iCol != jMax)
			{

			}
			while (iRaw != iMax)
			{

			}
			
			ArrayTD[iRaw][iCol] = ++iSequence;
		}
	}
	else				//Odd Array Size
	{

	}
	
}

void InitTDArraySequence(int ArrayTD[][iSIZE], int size)
{
	int iSequence(0);
	for (int i = 0; i < size; ++i)
	{
		for (int j = 0; j < size; ++j)
		{
			ArrayTD[i][j] = ++iSequence;
		}
	}
}

void OutputTDArray(int ArrayTD[][iSIZE], int size)
{
	//std::cout << "Output Array:" << std::endl << std::endl;
	for (int i = 0; i < size; ++i)
	{
		for (int j = 0; j < size; ++j)
		{
			std::cout << std::setw(6) << ArrayTD[i][j];
		}
		std::cout << std::endl << std::endl;
	}
	std::cout << std::endl << std::endl;
	std::cout << "----------------------------------" << std::endl << std::endl;
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
