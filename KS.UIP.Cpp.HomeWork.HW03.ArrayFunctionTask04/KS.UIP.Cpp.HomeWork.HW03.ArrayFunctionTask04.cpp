// KS.UIP.Cpp.HomeWork.HW03.ArrayFunctionTask04.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

//HW03. Task 04.
// Init the Array. Use the random function for numbers of Array.
// Sort the numbers in Array (Ascending direction).
// Use the "Select Mean":
// You take the Minimum Number and move it to Sorted area.
// In Sorted Area place this Number one after another. 
// Thus your Non-Sorted Area would reduced after each Moving.
// After the very last Iteration - you will get the "Ascend direction Sorted Array".
//

#include "pch.h"
#include <iostream>
#include <time.h>

// FUNCTION declaration:
void InitArray(int Array[], int size);
void OutputArray(int Array[], int size);
void SortSelectiveAscend(int Array[], int size);

// MAIN part:
int main()
{
	const int iSIZE(20);
	int iArray[iSIZE] = { 0 };
//		iArraySorted[iSIZE] = { 0 };

	std::cout << "------- HW03. TASK 04-1 (Approach 01) -------\n";
	InitArray(iArray, iSIZE);
	std::cout << "---------- Initial Array: ----------" << std::endl;
	OutputArray(iArray, iSIZE);

	SortSelectiveAscend(iArray, iSIZE);

	std::cout << "---------- Sorted Array (Ascend): ----------" << std::endl;
	OutputArray(iArray, iSIZE);

	std::cout << "\n---------------------------------------------\n";
	return 0;
}

// FUNCTION body:
// VOID function:
void InitArray(int Array[], int size)
{
	srand(time(0));
	for (int i = 0; i < size; ++i)
	{
		Array[i] = rand() % 20 - 11;
	}
}

void OutputArray(int Array[], int size)
{
	for (int i = 0; i < size; ++i)
	{
		std::cout << Array[i] << "\t";
	}
	std::cout << "\n";
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


// INT function:



// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
