// KS.UIP.Cpp.HomeWork.HW03.ArrayFunctionTask03.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

// Init Array for 100 items. Do it with use of random function.
// 100 items mean -  100 meters of road. i=56 means 56th meter.
// Each number in Array - is number of Defects on the 1 meter road. 
// e.g. iArray[56] = {5} - mean "We have 5 road Defects on the 56th meter."
// 
// Show Road-Repair Statistic:
// | Number       |  Number        |  Hystogram            |
// | of meter [i] |  of Defects {} |  sign (*, or #, or $) |
//
// * - when defects <= 3 on particular [i];
// # - when defects > 3 on particular [i];
// $ - when we have one by one > 3 Meters with #-sign
// (look at example below)
//
// ! IMPORTANT ! - to receive hystogram-like look, the table should looks like:
// | Number   |  Number     |  Hystogram |
// | of meter |  of Defects |  sign      |
// |----------|-------------|------------|
// | 1        | 2           | **         |
// | 2        | 4           | ####       |
// | 3        | 4           | ####       |
// | 4        | 4           | ####       |
// | 5        | 4           | $$$$       |
// | 6        | 7           | $$$$$$$    |
// You may not use separation signs "|" or "---" or whatever. It is up to you for now.
//

#include "pch.h"
#include <iostream>
#include <time.h>

//Function declaration:
void InitArray(int Array[], int size);
void OutputArray(int Array[], int size);
void OutputResultLegend();

void StatisticsDefectsGeneral(int Array[], int size);
void StatisticsDefectsNull(int nDefectsNum, int nMeterNum);
void StatisticsDefectsMinor(int nDefectsNum, int nMeterNum);
void StatisticsDefectsMinorSymbol(int nDefectsNum);
void StatisticsDefectsMajor(int Array[], int nMeterNum, int nCountMeters);
void StatisticsDefectsMajorSymbol(int nDefectsNum);
void StatisticsDefectsExtreme(int Array[], int nMeterNum, int nCountMeters);
void StatisticsDefectsExtremeSymbol(int nDefectsNum);

//void OutputResultStatistics(int Array[], int size);

//MAIN part:
int main()
{
	const int iSIZE(20);
	int iArray[iSIZE] = { 0 };

	std::cout << "--------------- HW03. Task 03: -------------" << std::endl;
	InitArray(iArray, iSIZE);
	std::cout << std::endl << "------ Initial Array (Defects on the Road): ------" << std::endl;
	OutputArray(iArray, iSIZE);

	OutputResultLegend();
	StatisticsDefectsGeneral(iArray, iSIZE);
	std::cout << "--------------------------------------------------" << std::endl;
	
	return 0;
}

//FUNCTION body:
//VOID functions:
void InitArray(int Array[], int size)
{
	srand(time(0));

	for (int i = 0; i < size; ++i)
	{
		Array[i] = rand() % 11;
	}
}

void OutputArray(int Array[], int size)
{
	for (int i = 0; i < size; ++i)
	{
	std::cout << Array[i] << "\t";
	}
}

void OutputResultLegend()
{
	std::cout << std::endl << "---------- Statistic Output -----------" << std::endl;
	std::cout << std::endl << "LEGEND:" << std::endl;
	std::cout << std::endl << "* - LESS than 3 Defects on a Road Section" << std::endl;
	std::cout << std::endl << "# - More than 3 Defects on a Road Section" << std::endl;
	std::cout << std::endl << "$ - More than 3 Sections with more than 3 Defects one-by-one" << std::endl;
	std::cout << std::endl << "TABLE:" << std::endl;
	std::cout << " ================================" << std::endl;
	std::cout << "|  Road   | Defects |   Hysto    |" << std::endl;
	std::cout << "| Section |         |    sign    |" << std::endl;
	std::cout << " ================================" << std::endl;
}

void StatisticsDefectsGeneral(int Array[], int size)
{
	int nCountMeters(0);
	for (int i = 0; i < size; ++i)
	{
		if (Array[i] > 3)
		{
			++nCountMeters;
			if (i == size - 1 && nCountMeters > 0 && nCountMeters <= 3)
			{
				//draw #;
				StatisticsDefectsMajor(Array, size, nCountMeters);
			}
			else if (i == size - 1 && nCountMeters > 3)
				{
					//draw $;
					StatisticsDefectsExtreme(Array, size, nCountMeters);
				}
		}
		else if (Array[i] == 0 && nCountMeters == 0)
		{
			//draw 0;
			StatisticsDefectsNull(Array[i], i);
			nCountMeters = 0;
		}
		else if (Array[i] == 0 && nCountMeters > 0 && nCountMeters <= 3)
		{
			//draw #;
			//draw 0;
			StatisticsDefectsMajor(Array, i, nCountMeters);
			StatisticsDefectsNull(Array[i], i);
			nCountMeters = 0;
		}
		else if (Array[i] == 0 && nCountMeters > 3)
		{
			//draw $;
			//draw 0;
			StatisticsDefectsExtreme(Array, i, nCountMeters);
			StatisticsDefectsNull(Array[i], i);
			nCountMeters = 0;
		}
		else if (Array[i] > 0 && Array[i] <= 3 && nCountMeters == 0)
		{
			//draw *;
			StatisticsDefectsMinor(Array[i], i);
			nCountMeters = 0;
		}
		else if (Array[i] > 0 && Array[i] <= 3 && nCountMeters > 0 && nCountMeters <= 3)
		{
			//draw #;
			//draw *;
			StatisticsDefectsMajor(Array, i, nCountMeters);
			StatisticsDefectsMinor(Array[i], i);
			nCountMeters = 0;
		}
		else if (Array[i] > 0 && Array[i] <= 3 && nCountMeters > 3)
		{
			//draw $$
			//draw *
			StatisticsDefectsExtreme(Array, i, nCountMeters);
			StatisticsDefectsMinor(Array[i], i);
			nCountMeters = 0;
		}
	}
}

void StatisticsDefectsNull(int nDefectsNum, int nMeterNum)
{
	std::cout << "|  " << nMeterNum << "\t  |\t" << nDefectsNum << 
		"   |\t " << nDefectsNum << std::endl;
}

void StatisticsDefectsMinor(int nDefectsNum, int nMeterNum)
{
	std::cout << "|  " << nMeterNum << "\t  |\t" << nDefectsNum << "   | ";
	StatisticsDefectsMinorSymbol(nDefectsNum);
	std::cout << std::endl;
}

void StatisticsDefectsMinorSymbol(int nDefectsNum)
{
	for (int i = 0; i < nDefectsNum; ++i)
	{
		std::cout << "*";
	}
}

void StatisticsDefectsMajor(int Array[], int nMeterNum, int nCountMeters)
{
	for (int i = nMeterNum - nCountMeters; i < nMeterNum; ++i)
	{
		if (Array[i] >= 10)
		{
			std::cout << "|  " << i << "\t  |\t" << Array[i] << "  | ";
			StatisticsDefectsMajorSymbol(Array[i]);
			std::cout << std::endl;
		}
		else if (Array[i] < 10)
		{
			std::cout << "|  " << i << "\t  |\t" << Array[i] << "   | ";
			StatisticsDefectsMajorSymbol(Array[i]);
			std::cout << std::endl;
		}
	}
}

void StatisticsDefectsMajorSymbol(int nDefectsNum)
{
	for (int i = 0; i < nDefectsNum; ++i)
	{
		std::cout << "#";
	}
}

void StatisticsDefectsExtreme(int Array[], int nMeterNum, int nCountMeters)
{
	for (int i = nMeterNum - nCountMeters; i < nMeterNum; ++i)
	{
		if (Array[i] >= 10)
		{
			std::cout << "|  " << i << "\t  |\t" << Array[i] << "  | ";
			StatisticsDefectsExtremeSymbol(Array[i]);
			std::cout << std::endl;
		}
		else if (Array[i] < 10)
		{
			std::cout << "|  " << i << "\t  |\t" << Array[i] << "   | ";
			StatisticsDefectsExtremeSymbol(Array[i]);
			std::cout << std::endl;
		}
	}
}

void StatisticsDefectsExtremeSymbol(int nDefectsNum)
{
	for (int i = 0; i < nDefectsNum; ++i)
	{
		std::cout << "$";
	}
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
