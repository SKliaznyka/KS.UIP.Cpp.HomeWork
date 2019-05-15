// KS.UIP.Cpp.HomeWork.HW03.ArrayFunction.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

//  Input the int Array. For array input use the Random function.
//  Show the statistic of the Array numbers e.g.:
//   1	 5times
//   4	 9times
//  .............
//	etc.

#include "pch.h"
#include <iostream>
#include <time.h>

// function declaration:
void InitArray(int Array[], int size);
void OutputArray(int Array[], int size);
void SortingBubbleAscend(int Array[], int size);
void StatArrayItems(int Array[], int size);

// MAIN part:
int main()
{
	const int iSIZE(20);
	int iArray[iSIZE] = { 0 };

	std::cout << "\n=============== TASK 3-1: ============\n";
	InitArray(iArray, iSIZE);
	std::cout << "\n======== Initial Array: ==========\n";
	OutputArray(iArray, iSIZE);

	SortingBubbleAscend(iArray, iSIZE);

	std::cout << "\n======== Stat Array: ==========\n";
	StatArrayItems(iArray, iSIZE);

	std::cout << "\n=========================================\n";
	return 0;
}


// FUNCTION body:
// VOID functions:
void InitArray(int Array[], int size)
{
	srand(time(0));
	for (int i = 0; i < size; ++i)
	{
		Array[i] = rand() % 31-15;
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

void SortingBubbleAscend(int Array[], int size)
{
	for (int i = 0; i < size-2; ++i)
	{
		for (int j = 0; j < size-1; ++j)
		{
			if (Array[j] > Array[j + 1])
			{
				int nSwapItem;
				nSwapItem = Array[j];
				Array[j] = Array[j + 1];
				Array[j + 1] = nSwapItem;
			}
		}
	}
}

void StatArrayItems(int Array[], int size)
{
	int nMatchNumber(1);
	for (int i = 0; i < size - 1; ++i)
	{
		if (Array[i] < Array[i + 1])
		{
			std::cout << Array[i] << "\t" << nMatchNumber << "times\n";
			nMatchNumber = 1;
		}
		else
		{
			++nMatchNumber;
		}
	}
	std::cout << Array[size - 1] << "\t" << nMatchNumber << "times\n";
}
//

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
