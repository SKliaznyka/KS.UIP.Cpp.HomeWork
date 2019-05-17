// KS.UIP.Cpp.HomeWork.HW03.ArrayFunctionTask06.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

//HOMEWORK 03. TASK 06 (optional). APPROACH 1 
//

#include "pch.h"
#include <iostream>

//FUNCTION declaration:
void InitArray(int Array[], int size, int randParam);
void OutputArray(int Array[], int size);
void SortSelectiveAscend(int Array[], int size);

void FindNonEqualNumbersInArrays(int Array1[], int Array2[], int size1, int size2);

//MAIN:
int main()
{
	const int iSIZE1(20);
	const int iSIZE2(25);
	const int RAND1(0);
	const int RAND2(1);

	int iArray1[iSIZE1] = { 0 },
		iArray2[iSIZE2] = { 0 };
	int iRandParam(0);

	std::cout << "----------------- HW03. TASK 06-1 ----------------" << std::endl;
	InitArray(iArray1, iSIZE1, RAND1);
	InitArray(iArray2, iSIZE2, RAND2);

	std::cout << "Array 1:" << std::endl;
	OutputArray(iArray1, iSIZE1);

	std::cout << "Array 2:" << std::endl;
	OutputArray(iArray2, iSIZE2);

	std::cout << "==================================================" << std::endl;
	return 0;
}

//FUNCTION body:
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

}

void FindNonEqualNumbersInArrays(int Array1[], int Array2[], int size1, int size2)
{

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
