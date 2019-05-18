// KS.UIP.Cpp.HomeWork.HW04.TwoDimmArrayTask05.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

//HomeWork 04. Task 05.
//Input 2-Dimm Array.
//Input method - Random.
//Show the Row number, where summ of all numbers is Maximum.

#include "pch.h"
#include <iostream>
#include <Windows.h>
#include <iomanip>

//GLOBAL const:
const int iSIZE(5);

//FUNCTION declaration:
void InitTDArray(int ArrTD[][iSIZE], int size);
void OutputTDArray(int ArrTD[][iSIZE], int size);
void OutputRawWithMaxSumm(int ArrTD[][iSIZE], int size);

int main()
{
	int iArrayTD[iSIZE][iSIZE] = { 0 };

	std::cout << "------------- Homework 04. Task 05 -----------------" << std::endl;
	std::cout << "Last - Min in each Raw" << std::endl << std::endl;

	InitTDArray(iArrayTD, iSIZE);

	std::cout << "Given Array:" << std::endl << std::endl;
	OutputTDArray(iArrayTD, iSIZE);

	OutputRawWithMaxSumm(iArrayTD, iSIZE);

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

void OutputRawWithMaxSumm(int ArrTD[][iSIZE], int size)
{
	int iSumInRaw(0), iSum(0),
		iRawNumber(0);

	for (int i = 0; i < size; ++i)
	{
		//iRawNumber = i;
		iSum = 0;
		for (int j = 0; j < iSIZE; ++j)
		{
			iSum = iSum + ArrTD[i][j];
		}
		if (iSum > iSumInRaw)
		{
			iSumInRaw = iSum;
			iRawNumber = i;
		}
		
		//iSumInRaw = (iSum > iSumInRaw) ? iSum : iSumInRaw;
		//iRawNumber = (iSum > iSumInRaw) ? i : iRawNumber;
	}
	std::cout << "Raw with max sum of its elements:\t";
	std::cout << iRawNumber << std::endl << std::endl;
	std::cout << "Max sum of Raw elements:\t";
	std::cout << iSumInRaw << std::endl << std::endl;
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
