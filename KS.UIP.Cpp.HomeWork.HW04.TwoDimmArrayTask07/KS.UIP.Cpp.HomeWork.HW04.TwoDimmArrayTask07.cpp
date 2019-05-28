// KS.UIP.Cpp.HomeWork.HW04.TwoDimmArrayTask07.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

//HomeWork 04. Task 07.
//Input Array. Square (i = j).
//Array initiates with the only 0 and 1.
//Input method:
//1 1 1 1 1
//0 1 1 1 0
//0 0 1 0 0
//0 1 1 1 0
//1 1 1 1 1
//

#include "pch.h"
#include <iostream>
#include <iomanip>

//GLOBAL Const:
const int iSIZE = 5;

//FUNCTION Declaration:
void InitArrayOneZeroTriangle(int Array[][iSIZE], int size);
void OutputArray(int Array[][iSIZE], int size);

//MAIN:
int main()
{
	int iArrayTD[iSIZE][iSIZE] = { 0 };

	InitArrayOneZeroTriangle(iArrayTD, iSIZE);

	OutputArray(iArrayTD, iSIZE);



	return 0;
}

//FUNCTION body:
void InitArrayOneZeroTriangle(int Array[][iSIZE], int size)
{
	for (int i = 0; i < size; ++i)
	{
		for (int j = 0; j < size; ++j)
		{
			if (i >= j && i < (-j + size))
			{
				Array[i][j] = 0;
			}
			else if (i <= j && i >= (-j + size - 1))
			{
				Array[i][j] = 0;
			}
			else
				Array[i][j] = 1;
		}
	}
}

void OutputArray(int Array[][iSIZE], int size)
{
	std::cout << "Array:" << std::endl << std::endl;
	for (int i = 0; i < size; ++i)
	{
		for (int j = 0; j < size; ++j)
		{
			std::cout << std::setw(6)<< Array[i][j];
		}
		std::cout << std::endl << std::endl;
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
