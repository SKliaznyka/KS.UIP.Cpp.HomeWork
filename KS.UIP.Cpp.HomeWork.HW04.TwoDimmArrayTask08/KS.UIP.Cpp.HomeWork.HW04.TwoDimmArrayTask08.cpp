// KS.UIP.Cpp.HomeWork.HW04.TwoDimmArrayTask08.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

//HomeWork 04. Task 08.
//Init 2D Array.
//Init method - random.
//Sort Array by Rows.
//Sort method: by Summ of the elements in Rows.
//Sort direction: Ascend.
//

#include "pch.h"
#include <iostream>
#include <time.h>
#include <iomanip>

//Global constants:
const int iSIZE = 5;

//FUNCTION Declarations:
void InitArray(int ArrayTD[][iSIZE], int size);
void OutputArray(int ArrayTD[][iSIZE], int size);

void InitArrayWithSumInRaw(int ArrayTD[][iSIZE], int ArrayWSum[][iSIZE + 1], int size);
void OutputArrayWithSumInRaw(int ArrayWSum[][iSIZE + 1], int size);

void SortArrayWithSumInRaw(int ArrayWSum[][iSIZE + 1], int size);

void OutputArrayNoLastColumn(int ArrayWSum[][iSIZE + 1], int size);

//MAIN:
int main()
{
	int iArrayTD[iSIZE][iSIZE] = { 0 };
	int iArrayWSum[iSIZE][iSIZE + 1] = { 0 };

	std::cout << "HW 04. Task 08. Array sorted by Summ in rows:" << std::endl;
	std::cout << "Initial Array:" << std::endl << std::endl;
	InitArray(iArrayTD, iSIZE);
	OutputArray(iArrayTD, iSIZE);

	InitArrayWithSumInRaw(iArrayTD, iArrayWSum, iSIZE);
	OutputArrayWithSumInRaw(iArrayWSum, iSIZE);

	SortArrayWithSumInRaw(iArrayWSum, iSIZE);
	OutputArrayWithSumInRaw(iArrayWSum, iSIZE);

	OutputArrayNoLastColumn(iArrayWSum, iSIZE);

	return 0;
}

//FUNCTION body:
void InitArray(int ArrayTD[][iSIZE], int size)
{
	srand(time(nullptr));
	for (int i = 0; i < size; ++i)
	{
		for (int j = 0; j < size; ++j)
		{
			ArrayTD[i][j] = rand() % 30 - 15;
		}
	}
}

void OutputArray(int ArrayTD[][iSIZE], int size)
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


void InitArrayWithSumInRaw(int ArrayTD[][iSIZE], int ArrayWSum[][iSIZE + 1], int size)
{
	//int ArrayTemp[iSIZE] = { 0 };
	int SummInRaw(0);

	for (int i = 0; i < size; ++i)
	{
		for (int j = 0; j < size; ++j)
		{
			ArrayWSum[i][j] = ArrayTD[i][j];
			SummInRaw = SummInRaw + ArrayWSum[i][j];
		}
		ArrayWSum[i][size] = SummInRaw;
		SummInRaw = 0;
	}
}


void OutputArrayWithSumInRaw(int ArrayWSum[][iSIZE + 1], int size)
{
	std::cout << "Output Array With Sum in Raw:" << std::endl << std::endl;
	for (int i = 0; i < size; ++i)
	{
		for (int j = 0; j < size + 1; ++j)
		{
			std::cout << std::setw(6) << ArrayWSum[i][j];
		}
		std::cout << std::endl << std::endl;
	}
	std::cout << std::endl << std::endl;
	std::cout << "----------------------------------" << std::endl << std::endl;
}

void SortArrayWithSumInRaw(int ArrayWSum[][iSIZE + 1], int size)
{
	int SwapRawArray[iSIZE + 1] = { 0 };
	int iRaw(0);

	for (int i = 0; i < size; ++i)
	{
		for (int j = 0; j < size + 1; ++j)
		{
			SwapRawArray[j] = ArrayWSum[i][j];
		}
		iRaw = i - 1;
		while (iRaw > -1 && SwapRawArray[size] < ArrayWSum[iRaw][size])
		{
			for (int j = 0; j < size + 1; ++j)
			{
				ArrayWSum[iRaw + 1][j] = ArrayWSum[iRaw][j];
			}
			--iRaw;
		}
		for (int j = 0; j < size + 1; ++j)
		{
			ArrayWSum[iRaw + 1][j] = SwapRawArray[j];
		}
	}
}

void OutputArrayNoLastColumn(int ArrayWSum[][iSIZE + 1], int size)
{
	std::cout << "Output Array Without Sum in Raw:" << std::endl << std::endl;
	for (int i = 0; i < size; ++i)
	{
		for (int j = 0; j < size; ++j)
		{
			std::cout << std::setw(6) << ArrayWSum[i][j];
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
