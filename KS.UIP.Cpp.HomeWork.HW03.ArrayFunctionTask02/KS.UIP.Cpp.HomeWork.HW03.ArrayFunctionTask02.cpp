// KS.UIP.Cpp.HomeWork.HW03.ArrayFunctionTask02.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

//HW03. Task02
//Input the int Array. For array input use the Random function.
//Show the numbers between Min and Max.

#include "pch.h"
#include <iostream>
#include <time.h>

//function declaration:
void InitArray(int Array[], int size);
void OutputArray(int Array[], int size);
void SortingBubbleAscendIndex(int Array[], int MinIndex, int MaxIndex);
void SortingBubbleDescendIndex(int Array[], int MinIndex, int MaxIndex);

int ArrayIndexMaxNumber(int Array[], int size);
int ArrayIndexMinNumber(int Array[], int size);

//MAIN part:
int main()
{
	const int iSIZE(20);
	int iArray[iSIZE] = { 0 },
		nMaxIndex(0), nMinIndex(0);

	std::cout << "\n================== TASK 3-2: ==============\n";
	InitArray(iArray, iSIZE);
	std::cout << "\n======== Initial Array: ==========\n";
	OutputArray(iArray, iSIZE);

	std::cout << "\n Index of MAX number is:\t" << ArrayIndexMaxNumber(iArray, iSIZE) << "\n";
	std::cout << "\n Index of MIN number is:\t" << ArrayIndexMinNumber(iArray, iSIZE) << "\n";

	nMaxIndex = ArrayIndexMaxNumber(iArray, iSIZE);
	nMinIndex = ArrayIndexMinNumber(iArray, iSIZE);

	if (nMinIndex < nMaxIndex)
	{
		SortingBubbleAscendIndex(iArray, nMinIndex, nMaxIndex);
		std::cout << "\n======== Sorted between MIN-to-MAX number in Array via Accending: ==========\n";
	}
	else
	{
		SortingBubbleDescendIndex(iArray, nMinIndex, nMaxIndex);
		std::cout << "\n======== Sorted between MAX-to-MIN number in Array via Descending: ==========\n";
	}
	OutputArray(iArray, iSIZE);
	std::cout << "\n=========================================\n";

	return 0;
}

//FUNCTION body
//VOID functions:
void InitArray(int Array[], int size)
{
	srand(time(0));
	for (int i = 0; i < size; ++i)
	{
		Array[i] = rand() % 31 - 15;
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

void SortingBubbleAscendIndex(int Array[], int MinIndex, int MaxIndex)
{
	for (int i = MinIndex; i < MaxIndex - 2; ++i)
	{
		for (int j = MinIndex; j < MaxIndex - 1; ++j)
		{
			if (Array[j] > Array[j + 1])
			{
				int nSwapItem(0);
				nSwapItem = Array[j + 1];
				Array[j + 1] = Array[j];
				Array[j] = nSwapItem;
			}
		}
	}
}

void SortingBubbleDescendIndex(int Array[], int MinIndex, int MaxIndex)
{
	for (int i = MaxIndex; i < MinIndex - 2; ++i)
	{
		for (int j = MaxIndex; j < MinIndex - 1; ++j)
		{
			if (Array[j] < Array[j + 1])
			{
				int nSwapItem(0);
				nSwapItem = Array[j + 1];
				Array[j + 1] = Array[j];
				Array[j] = nSwapItem;
			}
		}
	}
}


//INT functions:
int ArrayIndexMaxNumber(int Array[], int size)
{
	int nIndexMaxNumber(0),
		nArrayMaxNumber(0);
	nArrayMaxNumber = Array[0];

	for (int i = 0; i < size - 1; ++i)
	{
		nIndexMaxNumber = (Array[i + 1] > nArrayMaxNumber) ? i + 1 : nIndexMaxNumber;
		nArrayMaxNumber = (Array[i + 1] > nArrayMaxNumber) ? Array[i + 1] : nArrayMaxNumber;
	}
	return nIndexMaxNumber;
}

int ArrayIndexMinNumber(int Array[], int size)
{
	int nIndexMinNumber(0),
		nArrayMinNumber(0);
	nArrayMinNumber = Array[0];

	for (int i = 0; i < size - 1; ++i)
	{
		nIndexMinNumber = (Array[i + 1] < nArrayMinNumber) ? i + 1 : nIndexMinNumber;
		nArrayMinNumber = (Array[i + 1] < nArrayMinNumber) ? Array[i + 1] : nArrayMinNumber;
	}
	return nIndexMinNumber;
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
