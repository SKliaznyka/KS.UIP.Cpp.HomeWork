// KS.UIP.Cpp.HomeWork.HW11.BasicRememberTask01.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

//HomeWork 11. Task 01.
//Remember syntax, basic constructions.
//Create Array with 15 integers. 
//Create function(s):
// - fill the array with Even numbers in range [7, 125].
// - Input method - Random.
// - Output all the elements
// - Output only numbers, who divide by 3 OR 5.
// - Output such numbers on their positions.

#include "pch.h"
#include <iostream>

void initArray(int iArr[], int ArrSize, int StartArray, int EndArray);
void outputInitArray(int iArr[], int ArrSize);
void outputArrayByTask(int iArr[], int ArrSize);

int main()
{
	std::cout << "Homework 11. Task 01." << std::endl;
	std::cout << "Create random Array. Show Evens devided by 3 OR by 5" << std::endl;
	
	const int SIZE(15);
	const int iStartArray(7),
		iEndArray(125);

	int iArray[SIZE] = {0};

	initArray(iArray, SIZE, iStartArray, iEndArray);
	outputInitArray(iArray, SIZE);
	outputArrayByTask(iArray, SIZE);
	std::cout << "------------------------------" << std::endl;
	
	return 0; 
}

void initArray(int iArr[], int ArrSize, int StartArray, int EndArray)
{
	int iRange = StartArray - EndArray;
	int i(0);
	int iNumber(0);
	
	while (i < ArrSize)
	{
		iNumber = rand() % iRange + StartArray;
		if ((iNumber % 2) == 0)
		{
			iArr[i] = iNumber;
			++i;
		}
	}
}

void outputInitArray(int iArr[], int ArrSize)
{
	for (int i = 0; i < ArrSize; ++i)
	{
		std::cout << iArr[i] << " ";
	}
	std::cout << std::endl;
}

void outputArrayByTask(int iArr[], int ArrSize)
{
	for (int i = 0; i < ArrSize; ++i)
	{
		if ((iArr[i] % 3 == 0) || (iArr[i] % 5 == 0))
		{
			std::cout << iArr[i];
		}
		else if (iArr[i] / 10 >= 1)
		{
			std::cout << "  ";
		}
		else
		{
			std::cout << " ";
		}
		std::cout << " ";
	}
	std::cout << std::endl;
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
