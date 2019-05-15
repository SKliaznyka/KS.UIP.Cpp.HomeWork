// KS.UIP.Cpp.HomeWork.HW03.ArrayFunctionTask05.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

//HomeWork 03. TASK 04 (optional).
//Input two Arrays. Arrays initiates in Random way.
//Find equal numbers within two arrays. List these numbers.
//

#include "pch.h"
#include <iostream>
#include <time.h>

//FUNCTION declaration:
void InitArray(int Array[], int size, int randParam);
void OutputArray(int Array[], int size);
void SortSelectiveAscend(int Array[], int size);

void FindEqualNumbersInArrays(int Array1[], int Array2[], int size);

//MAIN:
int main()
{
	const int iSIZE(20);
	const int RAND1(0);
	const int RAND2(1);

	int iArray1[iSIZE] = { 0 },
		iArray2[iSIZE] = { 0 };
	int iRandParam(0);

	std::cout << "----------------- HW03. TASK 05 ------------------" << std::endl;
	InitArray(iArray1, iSIZE, RAND1);
	InitArray(iArray2, iSIZE, RAND2);

	std::cout << "Array 1:" << std::endl;
	OutputArray(iArray1, iSIZE);

	std::cout << "Array 2:" << std::endl;
	OutputArray(iArray2, iSIZE);

	SortSelectiveAscend(iArray1, iSIZE);

	std::cout << "Equal numbers in Array1, Array2:" << std::endl;
	FindEqualNumbersInArrays(iArray1, iArray2, iSIZE);

	std::cout << "==================================================" << std::endl;
	return 0;
}

//FUNCTION Body:
//VOIDs:
void InitArray(int Array[], int size, int randParam)
{
	srand(randParam);
	for (int i = 0; i < size; ++i)
	{
		Array[i] = rand() % 31 - 10;
	}
}

void OutputArray(int Array[], int size)
{
	for (int i = 0; i < size; ++i)
	{
		std::cout << Array[i] << "\t";
	}
	std::cout << std::endl;
	std::cout << "-------------------------------" << std::endl << std::endl;
}

void SortSelectiveAscend(int Array[], int size)
{
	int nMinNumber(0),
		nMinNumberPos(0);

	for (int i = 0; i < size; ++i)
	{
		nMinNumber = Array[i];
		nMinNumberPos = i;
		for (int j = i; j < size; ++j)
		{
			if (Array[j] < nMinNumber)
			{
				nMinNumber = Array[j];
				nMinNumberPos = j;
			}
		}
		Array[nMinNumberPos] = Array[i];
		Array[i] = nMinNumber;
	}
}

void FindEqualNumbersInArrays(int Array1[], int Array2[], int size)
{
	int nEqual(0);

	for (int i = 0; i < size-1; ++i)
	{
		if (i + 1 == size && Array1[i] > Array1[i - 1])
		{
			for (int j = 0; j < size; ++j)
			{
				(Array1[i] == Array2[j]) ? ++nEqual : nEqual;
			}
		}
		else if (Array1[i] < Array1[i + 1])
		{
			for (int j = 0; j < size; ++j)
			{
				(Array1[i] == Array2[j]) ? ++nEqual : nEqual;
			}
		}
		if (nEqual > 0)
		{
			std::cout << Array1[i] << "\t" << nEqual << " times" << std::endl;
		}
		nEqual = 0;
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
