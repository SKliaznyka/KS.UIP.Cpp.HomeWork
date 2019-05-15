// KS.UIP.Cpp.HomeWork.HW02.DoForWhile.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <Windows.h>


int main()
{
	if (false)
	{
		/*
		HW02. Task 01 ("Fall-Through"):
		User input the Numbers (int):
		- Day
		- Month
		- Year.
		Calculate the Total number of days since 1st of January of the Year till the specified date.
		Try to use "fall-through"(w/o Break) in the Switch-Case operator.
		*/
	}

	if (false)
	{
		/*
		HW02. Task 02:
		Show in console 1000 stars ('*').
		*/
		std::cout << "\n HW02. Task 02 (1000 stars): \n";

		for (int i = 1; i <= 1000; ++i)
		{
			std::cout << "*";
		}

		std::cout << "\n================================= \n";
	}

	if (false)
	{
		/*
		HW02. Task 03:
		Given range of int: [0...100]
		Show all the numbers which ends with "5".
		*/
		std::cout << "\n HW02. Task 03 (0...100 show all that ends on '5'): \n";

		for (int i = 1; i <= 100; ++i)
		{
			if (i % 10 == 5)
			{
				std::cout << i << "\n";
			}
		}

		std::cout << "\n================================= \n";
	}

	if (false)
	{
		/*
		HW02. Task 04:
		Given range of int: [0...100]
		Show all the numbers contains "5".
		*/
		std::cout << "\n HW02. Task 04 (show the numbers contains '5'. Range 0...100): \n";

		for (int i = 1; i <= 100; ++i)
		{
			if (i % 10 == 5 || i / 10 == 5)
			{
				std::cout << i << "\n";
			}
		}

		std::cout << "\n================================= \n";
	}

	if (false)
	{
		/*
		HW02. Task 05:
		Given range of int: [0...1000]
		Show all the numbers IF their summ of all the digits < 5.
		*/
		std::cout << "\n HW02. Task 05 (0...1000 show all that summ of digits < 5): \n";

		for (int i = 1; i <= 1000; ++i)
		{
			if ((i / 100 + i % 100 / 10 + i % 100 % 10) < 5)
			{
				std::cout << i << "\n";
			}
		}
		std::cout << "\n================================= \n";
	}

	if (false)
	{
		/*
		HW02. Task 06:
		Show in console 1000 stars ("*").
		Each row should contain no more than 8 stars
		*/

		int nLengthRow(0);

		std::cout << "\n HW02. Task 06 (0...1000 stars. 8 in a row): \n";
		for (int i = 1; i <= 1000; ++i)
		{
			++nLengthRow;
			std::cout << "*";
			if (nLengthRow == 8)
			{
				std::cout << "\n";
				nLengthRow = 0;
			}
		}
		std::cout << "\n================================= \n";
	}

	if (false)
	{
		/*
		HW02. Task 07:
		CALCULATOR.
		Do calculations untill user got Exit.
		Use: While(true) construction
		*/
		int nFirstNumber(0), nSecondNumber(0);
		char cCalcSign('0'), cPrompt('0');

		std::cout << "\n HW02. Task 07 (Calculator with User-Prompt ending): \n";

		while (true)
		{
			std::cout << "enter First Number: \t";
			std::cin >> nFirstNumber;
			std::cout << "enter Second Number: \t";
			std::cin >> nSecondNumber;
			std::cout << "enter the TYPE of calculation: \t";
			std::cin >> cCalcSign;

			switch (cCalcSign)
			{
			case '+':
				std::cout << "\n SUMM: \t" << nFirstNumber + nSecondNumber << "\n";
				break;
			case '/':
				if (nSecondNumber == 0)
				{
					std::cout << "\n ERROR, division by zero \n";
				}
				else
				{
					std::cout << "\n DIVISION: \t" << nFirstNumber / nSecondNumber << "\n";
				}
				break;
			case '-':
				std::cout << "\n MINUS: \t" << nFirstNumber - nSecondNumber << "\n";
				break;
			case '*':
				std::cout << "\n MULTIPLY: \t" << nFirstNumber * nSecondNumber << "\n";
				break;
			default:
				std::cout << "\n Wrong Calculation TYPE \n";
				break;
			}

			std::cout << "Continue calculation?:	\t";
			std::cin >> cPrompt;
			if (cPrompt == 'n' || cPrompt == 'N')
			{
				break;
			}
			else if (cPrompt == 'y' || cPrompt == 'Y')
			{
				system("Cls");
			}
		}
		std::cout << "\n================================= \n";
	}

	if (false)
	{
		/*
		HW02. Task 08:
		CALCULATOR.
		Do calculations untill user got Exit.
		Use: While(condition) construction
		*/
		int nFirstNumber(0), nSecondNumber(0);
		char cCalcSign('0'), cPrompt('0');

		std::cout << "\n HW02. Task 08 (Calculator with User-Prompt ending): \n";
		std::cout << "\n Would you like to do Calculation? (y/n):\t";
		std::cin >> cPrompt;

		while (cPrompt == 'y' || cPrompt == 'Y')
		{
			std::cout << "enter First Number: \t";
			std::cin >> nFirstNumber;
			std::cout << "enter Second Number: \t";
			std::cin >> nSecondNumber;
			std::cout << "enter the TYPE of calculation: \t";
			std::cin >> cCalcSign;

			switch (cCalcSign)
			{
			case '+':
				std::cout << "\n SUMM: \t" << nFirstNumber + nSecondNumber << "\n";
				break;
			case '/':
				if (nSecondNumber == 0)
				{
					std::cout << "\n ERROR, division by zero \n";
				}
				else
				{
					std::cout << "\n DIVISION: \t" << nFirstNumber / nSecondNumber << "\n";
				}
				break;
			case '-':
				std::cout << "\n MINUS: \t" << nFirstNumber - nSecondNumber << "\n";
				break;
			case '*':
				std::cout << "\n MULTIPLY: \t" << nFirstNumber * nSecondNumber << "\n";
				break;
			default:
				std::cout << "\n Wrong Calculation TYPE \n";
				break;
			}

			std::cout << "Continue calculation?:	\t";
			std::cin >> cPrompt;
			if (cPrompt == 'n' || cPrompt == 'N')
			{
				break;
			}
			else if (cPrompt == 'y' || cPrompt == 'Y')
			{
				system("Cls");
			}
		}
		std::cout << "\n================================= \n";
	}

	if (false)
	{
		/*
		HW02. Task 09:
		CALCULATOR.
		Do calculations untill user got Exit.
		Use: Do...While construction
		*/
		int nFirstNumber(0), nSecondNumber(0);
		char cCalcSign('0'), cPrompt('0');

		std::cout << "\n HW02. Task 09 (Calculator with User-Prompt ending): \n";

		do
		{
			std::cout << "enter First Number: \t";
			std::cin >> nFirstNumber;
			std::cout << "enter Second Number: \t";
			std::cin >> nSecondNumber;
			std::cout << "enter the TYPE of calculation: \t";
			std::cin >> cCalcSign;

			switch (cCalcSign)
			{
			case '+':
				std::cout << "\n SUMM: \t" << nFirstNumber + nSecondNumber << "\n";
				break;
			case '/':
				if (nSecondNumber == 0)
				{
					std::cout << "\n ERROR, division by zero \n";
				}
				else
				{
					std::cout << "\n DIVISION: \t" << nFirstNumber / nSecondNumber << "\n";
				}
				break;
			case '-':
				std::cout << "\n MINUS: \t" << nFirstNumber - nSecondNumber << "\n";
				break;
			case '*':
				std::cout << "\n MULTIPLY: \t" << nFirstNumber * nSecondNumber << "\n";
				break;
			default:
				std::cout << "\n Wrong Calculation TYPE \n";
				break;
			}

			std::cout << "Continue calculation?:	\t";
			std::cin >> cPrompt;
			if (cPrompt == 'n' || cPrompt == 'N')
			{
				break;
			}
			else if (cPrompt == 'y' || cPrompt == 'Y')
			{
				system("Cls");
			}
		} while (cPrompt == 'y' || cPrompt == 'Y');
		std::cout << "\n================================= \n";
	}

	if (false)
	{
		/*
		HW02. Task 10:
		Do the Rectangle filled with Stars
		User should Enter dimensions.
		*/
		int nLength(0), nWidth(0);

		std::cout << "\n HW02. Task 10 (Rectangle with Stars): \n";
		std::cout << "Length:\t";
		std::cin >> nLength;
		std::cout << "Width:\t";
		std::cin >> nWidth;

		nLength = (nLength > 3) ? nLength : 6;
		nWidth = (nWidth > 3) ? nWidth : 4;

		for (int i = 1; i <= nWidth; ++i)
		{
			for (int j = 1; j <= nLength; ++j)
			{
				std::cout << "*";
				if (j == nLength)
				{
					std::cout << "\n";
				}
			}
		}

		std::cout << "\n================================= \n";
	}

	if (false)
	{
		/*
		HW02. Task 11-1 (APPROACH #1):
		Draw the Rectangle. Stars "*" makes the ONLY boundaries.
		User should Enter dimensions.
		*/
		int nLength(0), nWidth(0);

		std::cout << "\n HW02. Task 11-1 APPROACH#1 (Rectangle. Stars - Boundaries): \n";
		std::cout << "Length:\t";
		std::cin >> nLength;
		std::cout << "Width:\t";
		std::cin >> nWidth;

		nLength = (nLength > 3) ? nLength : 6;
		nWidth = (nWidth > 3) ? nWidth : 4;

		for (int i = 1; i <= nWidth; ++i)
		{
			for (int j = 1; j <= nLength; ++j)
			{
				if (i == 1 || i == nWidth || j == 1 || j == nLength)
				{
					std::cout << "*";
					if (j == nLength)
					{
						std::cout << "\n";
					}
				}
				else
				{
					std::cout << " ";
					if (j == nLength)
					{
						std::cout << "\n";
					}
				}

			}
		}
		std::cout << "\n================================= \n";
	}

	if (false)
	{
		/*
		HW02. Task 11-2 (APPROACH #2):
		Draw the Rectangle. Stars "*" makes the ONLY boundaries.
		User should Enter dimensions.
		*/
		int nLength(0), nWidth(0);
		char cSymbol('0');

		std::cout << "\n HW02. Task 11 APPROACH #2 (Rectangle. Stars - Boundaries): \n";
		std::cout << "Length:\t";
		std::cin >> nLength;
		std::cout << "Width:\t";
		std::cin >> nWidth;

		nLength = (nLength > 3) ? nLength : 6;
		nWidth = (nWidth > 3) ? nWidth : 4;

		for (int i = 1; i <= nWidth; ++i)
		{
			for (int j = 1; j <= nLength; ++j)
			{
				cSymbol = (i == 1 || i == nWidth || j == 1 || j == nLength) ? '*' : ' ';
				std::cout << cSymbol;
				if (j == nLength)
				{
					std::cout << "\n";
				}
			}
		}
		std::cout << "\n================================= \n";
	}

	if (false)
	{
		/*
		HW02. Task 12:
		Draw the RIGHT TRIANGLE filled with Stars.
		Left - full vertical side.
		User should Enter dimension.
		*/

		int nLength(0);

		std::cout << "\n HW02. Task 12 (Right Triangle): \n";
		std::cout << "Length:\t";
		std::cin >> nLength;

		nLength = (nLength > 1) ? nLength : 2;

		for (int i = 1; i <= nLength; ++i)
		{
			for (int j = 1; j <= i; ++j)
			{
				std::cout << "*";
				if (j == i)
				{
					std::cout << "\n";
				}
			}
		}

		std::cout << "\n================================= \n";
	}

	if (false)
	{
		/*
		HW02. Task 13-1 (APPROACH #1):
		Draw the ISOSCELES TRIANGLE  !Filled! with Stars.
		User should Enter the Triangle Height.
		*/

		int nHeight(0),
			nStars(0), nSpaces(0);
		char cSymbol('0');

		std::cout << "\n HW02. Task 13-1 APPROACH #1 (ISOSCELES Triangle): \n";
		std::cout << "Triangle Height:\t";
		std::cin >> nHeight;

		nHeight = (nHeight > 1) ? nHeight : 2;

		for (int i = 1; i <= nHeight; ++i)
		{
			nStars = i * 2 - 1;
			nSpaces = nHeight * 2 - 1 - nStars;
			for (int j = 1; j <= nHeight * 2 - 1; ++j)
			{
				cSymbol = (j > nSpaces / 2 && j <= ((nSpaces / 2) + nStars)) ? '*' : ' ';
				std::cout << cSymbol;
			}
			std::cout << "\n";
		}
		std::cout << "\n================================= \n";
	}

	if (false)
	{
		/*
		HW02. Task 13-2 (APPROACH #2):
		Draw the ISOSCELES TRIANGL filled with stars ('*').
		User should Enter height.
		*/

		int nHeight(0);
		char cSymbol('0');

		std::cout << "\n HW02. Task 13-2 Approach #2. (ISOSCELES Triangle #2): \n";
		std::cout << "Triangle Height:\t";
		std::cin >> nHeight;

		nHeight = (nHeight > 1) ? nHeight : 2;

		for (int i = 1; i <= nHeight; ++i)
		{
			for (int j = 1; j <= nHeight * 2 - 1; ++j)
			{
				cSymbol = (j <= nHeight - i || j > nHeight + i - 1) ? ' ' : '*';
				std::cout << cSymbol;
			}
			std::cout << "\n";
		}

		std::cout << "\n================================= \n";
	}

	if (false)
	{
		/*
		HW02. Task 13-3:
		Draw the ISOSCELES TRIANGLE. Stars ('*') makes the ONLY Boundaries.
		User should Enter height.
		*/

		int nHeight(0);

		std::cout << "\n HW02. Task 13 (ISOSCELES Triangle #2): \n";
		std::cout << "Triangle Height:\t";
		std::cin >> nHeight;

		nHeight = (nHeight > 1) ? nHeight : 2;

		for (int i = 1; i <= nHeight; ++i)
		{
			for (int j = 1; j <= nHeight * 2 - 1; ++j)
			{
				if (i != nHeight)
				{
					if (j <= nHeight - i || j > nHeight + i - 1)
					{
						std::cout << " ";
					}
					else if (j > nHeight - i + 1 && j < nHeight + i - 1)
					{
						std::cout << " ";
					}
					else
					{
						std::cout << "*";
					}
				}
				else
				{
					std::cout << "*";
				}
			}
			std::cout << "\n";
		}

		std::cout << "\n================================= \n";
	}

	if (false)
	{
		/*
		HW02. Task 14:
		Draw the RIGHT TRIANGLE filled with Stars.
		Right side - full vertical side.
		User should Enter dimension.
		*/

		int nHeight(0);
		char cSymbol('0');

		std::cout << "\n HW02. Task 14 (Right Triangle #2): \n";
		std::cout << "Triangle Height:\t";
		std::cin >> nHeight;

		nHeight = (nHeight > 1) ? nHeight : 2;

		for (int i = 1; i <= nHeight; ++i)
		{
			for (int j = 1; j <= nHeight; ++j)
			{
				cSymbol = ((j - (nHeight - i)) > 0) ? '*' : ' ';
				std::cout << cSymbol;
				if (j == nHeight)
				{
					std::cout << "\n";
				}

			}
		}

		std::cout << "\n================================= \n";
	}

	if (true)
	{
		/*
		HW02. Task 15:
		Draw the FIGURE after operator CHOICE.
		CHOICE 1: Rectangle (Stars - are boundaries)
		CHOICE 2: Right Triangle (left side)
		CHOICE 3: Right Triangle (right side)
		CHOICE 4: Isosceles Triangle (filled with stars)
		CHOICE 5: Isosceles Triangle (stars - boundaries)
		Right side - full vertical side.
		User should Enter dimension.
		*/

		int nHeight(0),
			nChoice(0);
		char cPrompt('0');

		std::cout << "\n HW02. Task 15 (Figure after choice): \n";
		std::cout << "Would you like to draw a Figure?(y/n): \t";
		std::cin >> cPrompt;

		while (cPrompt == 'y' || cPrompt == 'Y')
		{
			std::cout << "Chose the kind of Figure:\n";
			std::cout << "1 - Rectangle \n";
			std::cout << "2 - Right Triangle (left side) \n";
			std::cout << "3 - Right Triangle (right side) \n";
			std::cout << "4 - Isoscele Triangle (filled with stars) \n";
			std::cout << "5 - Isoscele Triangle (stars - boundaries) \n";
			std::cout << "Your choice:\t";
			std::cin >> nChoice;

			switch (nChoice)
			{
			case 1:
			{
				int nLength(0), nWidth(0);
				char cSymbol('0');

				std::cout << "Rectangle Length:\t";
				std::cin >> nLength;
				std::cout << "Rectangle Width:\t";
				std::cin >> nWidth;

				nLength = (nLength > 3) ? nLength : 6;
				nWidth = (nWidth > 3) ? nWidth : 4;

				for (int i = 1; i <= nWidth; ++i)
				{
					for (int j = 1; j <= nLength; ++j)
					{
						cSymbol = (i == 1 || i == nWidth || j == 1 || j == nLength) ? '*' : ' ';
						std::cout << cSymbol;
						if (j == nLength)
						{
							std::cout << "\n";
						}
					}
				}
			}
			break;
			case 2:
			{
				int nLength(0);

				std::cout << "Triangle Height:\t";
				std::cin >> nLength;

				nLength = (nLength > 1) ? nLength : 2;

				for (int i = 1; i <= nLength; ++i)
				{
					for (int j = 1; j <= i; ++j)
					{
						std::cout << "*";
						if (j == i)
						{
							std::cout << "\n";
						}
					}
				}
			}
			break;
			case 3:
			{
				int nHeight(0);
				char cSymbol('0');

				std::cout << "Triangle Height:\t";
				std::cin >> nHeight;

				nHeight = (nHeight > 1) ? nHeight : 2;

				for (int i = 1; i <= nHeight; ++i)
				{
					for (int j = 1; j <= nHeight; ++j)
					{
						cSymbol = ((j - (nHeight - i)) > 0) ? '*' : ' ';
						std::cout << cSymbol;
						if (j == nHeight)
						{
							std::cout << "\n";
						}

					}
				}
			}
			break;
			case 4:
			{
				int nHeight(0);
				char cSymbol('0');

				std::cout << "Triangle Height:\t";
				std::cin >> nHeight;

				nHeight = (nHeight > 1) ? nHeight : 2;

				for (int i = 1; i <= nHeight; ++i)
				{
					for (int j = 1; j <= nHeight * 2 - 1; ++j)
					{
						cSymbol = (j <= nHeight - i || j > nHeight + i - 1) ? ' ' : '*';
						std::cout << cSymbol;
					}
					std::cout << "\n";
				}
			}
			break;

			case 5:
			{
				int nHeight(0);

				std::cout << "Triangle Height:\t";
				std::cin >> nHeight;

				nHeight = (nHeight > 1) ? nHeight : 2;

				for (int i = 1; i <= nHeight; ++i)
				{
					for (int j = 1; j <= nHeight * 2 - 1; ++j)
					{
						if (i != nHeight)
						{
							if (j <= nHeight - i || j > nHeight + i - 1)
							{
								std::cout << " ";
							}
							else if (j > nHeight - i + 1 && j < nHeight + i - 1)
							{
								std::cout << " ";
							}
							else
							{
								std::cout << "*";
							}
						}
						else
						{
							std::cout << "*";
						}
					}
					std::cout << "\n";
				}
			}
			break;

			default:
				std::cout << "! ERROR ! You entered non existed Figure type";
				break;
			}
			std::cout << "Continue drawing?(y/n):	\t";
			std::cin >> cPrompt;
			if (cPrompt == 'n' || cPrompt == 'N')
			{
				break;
			}
			else if (cPrompt == 'y' || cPrompt == 'Y')
			{
				system("Cls");
			}
		}

	}

	return 0;
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
