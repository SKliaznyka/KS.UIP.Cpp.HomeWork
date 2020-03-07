// KS.UIP.Cpp.HomeWork.HW05v2.TwoDimmArrPtrTask05.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
//HomeWork 05 v2. Task 05. 
//Tic-tac-toe
//
//Build a game Tic-tac-toe
//Make simple UI
//Provide "Wrong input processing"
//Provide ability to Exit game
//


#include "pch.h"
#include <iostream>
#include <iomanip>

//CONST:
const int SIZE(3);

//FUNC init:
void showGameRule();
void initTwoDimmArr(char cArray[][SIZE], int size);
void showTwoDimmArr(char cArray[][SIZE], int size);
void showGame(char cArray[][SIZE], int size);
void changeTwoDimmArrByUser(int CellNumber, char cSymbol, char cArray[][SIZE], int size);

//MAIN:
int main()
{
	showGameRule();

	char cArr[SIZE][SIZE] = { 0 };
	initTwoDimmArr(cArr, SIZE);
	showTwoDimmArr(cArr, SIZE);

	showGame(cArr, SIZE);
	return 0; 
}

//FUNC Body:

void showGameRule()
{
	std::cout << "! Welcome to Tic-Tac-Toe Game ! " << std::endl;
	std::cout << "------------------------------- " << std::endl;
	std::cout << "Rules:" << std::endl;
	std::cout << "Pattern has a CELL numbers" << std::endl;
	std::cout << "Scheme:" << std::endl;
	std::cout << "     |     |     " << std::endl;
	std::cout << "  1  |  2  |  3  " << std::endl;
	std::cout << "_________________" << std::endl;
	std::cout << "     |     |     " << std::endl;
	std::cout << "  4  |  5  |  6  " << std::endl;
	std::cout << "_________________" << std::endl;
	std::cout << "     |     |     " << std::endl;
	std::cout << "  7  |  8  |  9  " << std::endl << std::endl;
	std::cout << "You would be prompted with:" << std::endl;
	std::cout << "Next turn is 0 (or X), please enter cell number:\t" << std::endl << std::endl;
	std::cout << "Once You have entered cell number, then game would ask for next turn" << std::endl
		<< std::endl;
	std::cout << "EXIT game - press 'ESC' button. Good Luck! " << std::endl;
	std::cout << "===========================================" << std::endl;
}

void initTwoDimmArr(char cArray[][SIZE], int size)
{
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
		{
			cArray[i][j] = '0';
		}
	}

	char cCell = '0';
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
		{
			cCell = cCell++;
			cArray[i][j] = cCell;
		}
	}
}

void showTwoDimmArr(char cArray[][SIZE], int size)
{
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
		{
			std::cout << std::setw(3) << cArray[i][j];
		}
		std::cout << std::endl;
	}
}

void showGame(char cArray[][SIZE], int size)
{
	char cPrompt('0');
	char cInputSign('X');
	int iCellNum(0);
	while (true)
	{
		if (cInputSign == 'X')
		{
			std::cout << "input Cell number for 'X': \t";
			std::cin >> iCellNum;
			changeTwoDimmArrByUser(iCellNum, cInputSign, cArray, size);
			cInputSign = '0';
		}
		else // cInputSign == '0'
		{
			std::cout << "input Cell number for '0': \t";
			std::cin >> iCellNum;
			changeTwoDimmArrByUser(iCellNum, cInputSign, cArray, size);
			cInputSign = 'X';
		}
						
		showTwoDimmArr(cArray, SIZE);
		
		std::cout << "Continue playing?: \t";
		std::cin >> cPrompt;
		if (cPrompt == 'n' || cPrompt == 'N')
		{
			break;
		}
	}
}


void changeTwoDimmArrByUser(int CellNumber, char cSymbol, char cArray[][SIZE], int size)
{
	int iRaw(0);
	int iColumn(0);

	iRaw = (CellNumber % size != 0) ? (CellNumber / size) : (CellNumber / size - 1);
	
	if (CellNumber < 3)
	{
		iColumn = CellNumber - 1;
	}
	else if (CellNumber % size == 0)
	{
		iColumn = size - 1;
	}
	else
	{
		iColumn = (CellNumber % size) - 1;
	}
	
	cArray[iRaw][iColumn] = cSymbol;
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
