// KS.UIP.Cpp.HomeWork.HW05v2.TwoDimmArraysPointers.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
//Hometask 04.
//Init array 10x10.
//Init rule: random. Values = [-15;15].
//Show string numbers, where at least one Negative exist.
//Show array(s).
//EXTRA: Show string number where maximum Negatives (1st string firstTimeMet).
//EXTRA: Show string number where maximum Negatives (string where MostMinReached).
//

#include "pch.h"
#include <iostream>
#include <time.h>
#include <iomanip>

//CONST:
const int SIZE(10);

//FUNC Init:
void initTwoDimmArrRand(int iArray[][SIZE], int size);
void showTwoDimmArr(int iArray[][SIZE], int size);

void initArrayOfNegativesCountedByRaws(int iNegInArray[], int iArray[][SIZE], int size);
void showArrayOfCountNegatives(int iNegInArray[], int size);
void showRawWithMaxCounterOfNegatives(int iNegInArray[], int size);

void initArrayOfMaxNegativeSummByRaws(int iSumNegInArray[], int iArray[][SIZE], int size);
void showRawWithMaxNegativeSumm(int iSumNegInArray[], int size);


//MAIN:
int main()
{
	srand(time(0));

	int iArr[SIZE][SIZE] = { 0 };
	int iNegInArray[SIZE] = { 0 };
	int iSumNegInArray[SIZE] = { 0 };

	std::cout << "Homework 5. Task 04." << std::endl;
	
	initTwoDimmArrRand(iArr, SIZE);
	showTwoDimmArr(iArr, SIZE);
	
	initArrayOfNegativesCountedByRaws(iNegInArray, iArr, SIZE);
	showArrayOfCountNegatives(iNegInArray, SIZE);
	showRawWithMaxCounterOfNegatives(iNegInArray, SIZE);
	
	initArrayOfMaxNegativeSummByRaws(iSumNegInArray, iArr, SIZE);
	showRawWithMaxNegativeSumm(iSumNegInArray, SIZE);

	return 0; 
}


//FUNC body:
void initTwoDimmArrRand(int iArray[][SIZE], int size)
{
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
		{
			iArray[i][j] = rand() % 31 - 15;
		}
	}
}

void showTwoDimmArr(int iArray[][SIZE], int size)
{
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
		{
			std::cout << std::setw(3) << iArray[i][j] << ' ';
		}
		std::cout << std::endl;
	}
	std::cout << "--------------------" << std::endl;
}

void initArrayOfNegativesCountedByRaws(int iNegInArray[], int iArray[][SIZE], int size)
{
	int iNegCounter(0);
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
		{
			if (iArray[i][j] < 0)
			{
				iNegCounter++;
			}
		}
		iNegInArray[i] = iNegCounter;
		iNegCounter = 0;
	}
}

void showArrayOfCountNegatives(int iNegInArray[], int size)
{
	std::cout << "Number of Negatives in each Raw:" << std::endl;
	for (int i = 0; i < size; i++)
	{
		std::cout << iNegInArray[i] << std::endl;
	}
	std::cout << "---------------------" << std::endl;
}

void showRawWithMaxCounterOfNegatives(int iNegInArray[], int size)
{
	int iRawWithMaxCountNegatives(0);
	int iMin = iNegInArray[0];
	for (int i = 0; i < size; i++)
	{
		if (iNegInArray[i] > iMin)
		{
			iRawWithMaxCountNegatives = i;
			iMin = iNegInArray[i];
		}
	}
	std::cout << "First Raw with maximum counter of Negatives:" << std::endl;
	std::cout << iRawWithMaxCountNegatives << std::endl;
	std::cout << "--------------------------------" << std::endl;
}

void initArrayOfMaxNegativeSummByRaws(int iSumNegInArray[], int iArray[][SIZE], int size)
{
	int iSumOfNegatives = 0;
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
		{
			if (iArray[i][j] < 0)
			{
				iSumOfNegatives = iSumOfNegatives + iArray[i][j];
			}

		}
		iSumNegInArray[i] = iSumOfNegatives;
		iSumOfNegatives = 0;
	}
}

void showRawWithMaxNegativeSumm(int iSumNegInArray[], int size)
{
	int iRawMaxNegativeSumm(0);
	int iMin = iSumNegInArray[0];
	for (int i = 0; i < size; i++)
	{
		if (iSumNegInArray[i] < iMin)
		{
			iRawMaxNegativeSumm = i;
			iMin = iSumNegInArray[i];
		}
	}
	std::cout << "Raw with Most Summ of Negatives:" << std::endl;
	std::cout << iRawMaxNegativeSumm << std::endl;
	std::cout << "Most Summ of Negatives:" << std::endl;
	std::cout << iMin << std::endl;
	std::cout << "--------------------------------" << std::endl;
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
