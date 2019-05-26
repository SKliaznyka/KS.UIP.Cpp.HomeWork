// KS.UIP.Cpp.HomeWork.HW04.TwoDimmArrayTask06.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

//HomeWork 04. Task 06.
//Input Array.
//Input method - random.
//Sort the elements of the Array within EVEN raws ONLY!!!
//Sort direction - Ascend.
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

void InsertionSortAscendInEvenRaws(int ArrTD[][iSIZE], int size);

//MAIN:
int main()
{
	int iArrayTD[iSIZE][iSIZE] = { 0 };
	int iArray[iSIZE] = { 0 };
	std::cout << "------------- Homework 04. Task 06 -----------------" << std::endl;
	InitTDArray(iArrayTD, iSIZE);

	std::cout << "Initial Array:" << std::endl << std::endl;
	OutputTDArray(iArrayTD, iSIZE);

	InsertionSortAscendInEvenRaws(iArrayTD, iSIZE);

	std::cout << "Sorted in Even Raws Array:" << std::endl << std::endl;
	OutputTDArray(iArrayTD, iSIZE);

	return 0;
}

//FUNCTION body:
//VOIDs:
void InitTDArray(int ArrTD[][iSIZE], int size)
{
	srand(time(nullptr));
	for (int i = 0; i < size; ++i)
	{
		for (int j = 0; j < size; ++j)
		{
			ArrTD[i][j] = rand() % 40 - 20;
		}
	}
}

void OutputTDArray(int ArrTD[][iSIZE], int size)
{
	for (int i = 0; i < size; ++i)
	{
		for (int j = 0; j < size; ++j)
		{
			std::cout << std::setw(6) << ArrTD[i][j];
		}
		std::cout << std::endl;
	}
	std::cout << "------------------------------" << std::endl << std::endl;
}

void InsertionSortAscendInEvenRaws(int ArrTD[][iSIZE], int size)
{
	int nSwapArrayItem(0),
		nIndex(0);

	for (int i = 0; i < size; ++i)
	{
		if (i == 1 || i % 2 > 0)
		{
			for (int j = 0; j < size; ++j)
			{
				nSwapArrayItem = ArrTD[i][j];
				nIndex = j - 1;
				while (nIndex > -1 && nSwapArrayItem < ArrTD[i][nIndex])
				{
					ArrTD[i][nIndex + 1] = ArrTD[i][nIndex];
					--nIndex;
				}
				ArrTD[i][nIndex + 1] = nSwapArrayItem;
			}
		}
	}
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
