// KS.UIP.Cpp.HomeWork.HW01.VariablesTypes.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>

int main()
{
	int nNumber(0),
		nExponent(0),
		nHundreds(0), nDecimals(0), nDigit(0),
		nDay(0), nMonth(0), nYear(0),
		nDeltaDay(0);
	char cExponent('0'),
		cSymbol('0');
	double dXcoord(0.0), dYcoord(0.0), dRadius(0.0);

	if (false)
	{
		/*Task 01.
	User input the number (int).
	Determine: is the number Positive or Negative.
	Check if the Number is NULL.
	*/
		std::cout << "HW01. Task01:\n";
		std::cout << "\n Enter an integer Number: \t";
		std::cin >> nNumber;
		if (nNumber == 0)
		{
			std::cout << "\n Input Number is NULL \n";
		}
		else if (nNumber > 0)
		{
			std::cout << "\n Input Number is POSITIVE \n";
		}
		else
		{
			std::cout << "\n Input Number is NEGATIVE \n";
		}
		std::cout << "================================= \n\n";

	}

	if (false)
	{
		/*
		HW01. Task 02-1:
		User input the Number (int).
		User input the Exponential number (0...3),
		Do the calculation.
		*/
		std::cout << "HW01. Task 02-1 (exponentiation 0...3): \n";
		std::cout << "Enter the Number, please: \t";
		std::cin >> nNumber;
		std::cout << "Enter the Exponentiation value in range 0...3: \t";
		std::cin >> nExponent;
		switch (nExponent)
		{
		case 0:
			std::cout << nNumber << "^" << nExponent << "=\t 1 \n";
			break;
		case 1:
			std::cout << nNumber << "^" << nExponent << "=\t" << nNumber << "\n";
			break;
		case 2:
			std::cout << nNumber << "^" << nExponent << "=\t" << nNumber * nNumber << "\n";
			break;
		case 3:
			std::cout << nNumber << "^" << nExponent << "=\t" << nNumber * nNumber * nNumber << "\n";
			break;
		default:
			std::cout << "\n ERROR! Wrong exponentiation entering! Try Next time. \n";
			break;
		}
		std::cout << "================================= \n\n";
	}

	if (false)
	{
		/*
		HW01. Task 02-2:
		User input the Number (int).
		User choose the Type of Exponential operation:
		1. Square
		2. Cube
		Do calculation.
		*/
		std::cout << "HW01. Task 02-2 (exponentiation 0...3): \n";
		std::cout << "Enter the Number, please: \t";
		std::cin >> nNumber;
		std::cout << "Choose the Type of operation (You might choose the NUMBER) \n";
		std::cout << " 1 - Square exponentiation; 2 - Cube exponentiation: \t";
		std::cin >> cExponent;
		switch (cExponent)
		{
		case '1':
			std::cout << nNumber << "\t DSquared \t" << "=\t" << nNumber * nNumber << "\n";
			break;
		case '2':
			std::cout << nNumber << "\t Cubed \t" << "=\t" << nNumber * nNumber * nNumber << "\n";
			break;
		default:
			std::cout << "\n ERROR! Wrong exponentiation Type entering! Try Next time. \n";
			break;
		}
		std::cout << "================================= \n\n";
	}

	if (false)
	{
		/*
		HW01. Task 03:
		User input the Number (int).
		Determine, IF the end of the number is equal to "0".
		*/
		std::cout << "HW01. Task 03 (If the last DIGIT is '0'?): \n";
		std::cout << "\n Enter the Number, please: \t";
		std::cin >> nNumber;
		if (nNumber % 10 == 0)
		{
			std::cout << "The last DIGIT of the number IS:  '0' \n";
		}
		else
		{
			std::cout << "The last DIGIT of the number IS NOT:  '0' \n";
		}
		std::cout << "================================= \n\n";
	}

	if (false)
	{
		/*
		HW01. Task 04:
		User input the 3-DIGIT Number (int).
		Show this number in column (each digit in separate row).
		*/
		std::cout << "HW01. Task 04 (Number in column): \n";
		std::cout << "\n Enter the 3-Digit Number, please: \t";
		std::cin >> nNumber;
		if ((nNumber / 100) < 1)
		{
			std::cout << "\n ERROR! The input Number IS NOT 3-DIGIT. Please try again. \n";
		}
		else if ((nNumber / 100) >= 10)
		{
			std::cout << "\n ERROR! The input Number IS NOT 3-DIGIT. Please try again. \n";
		}
		else
		{
			nHundreds = nNumber / 100;
			nDecimals = (nNumber - nHundreds * 100) / 10;
			nDigit = (nNumber - nHundreds * 100) % 10;
			std::cout << "\n Your 3-DIGIT number in column: \n";
			std::cout << nHundreds << "\n";
			std::cout << nDecimals << "\n";
			std::cout << nDigit << "\n";
		}
		std::cout << "================================= \n\n";
	}

	if (false)
	{
		/*
		HW01. Task 05:
		User input the Character (char).
		Determine: is it regular Letter? / Is it Capital Letter? / Is it NOT a Letter?.
		*/
		std::cout << "HW01. Task 05 (If the symbol Capital or Regular): \n";
		std::cout << "\n Enter the Letter, please: \t";
		std::cin >> cSymbol;
		if ((int)cSymbol >= 'A' && (int)cSymbol <= 'Z')
		{
			std::cout << "\n The Letter is CAPITAL \n";
		}
		else if ((int)cSymbol >= 'a' && (int)cSymbol <= 'z')
		{
			std::cout << "\n The Letter is REGULAR \n";
		}
		else
		{
			std::cout << "\n The Symbol is NOT a LETTER \n";
		}
		std::cout << "================================= \n\n";
	}

	if (false)
	{
		/*
		HW01. Task 06:
		Circle-Target has center with coordinate (0,0).
		Radius = 12.
		User input the Point Coordinates  (x, y)

		Does this Point belong to Target?
		*/
		std::cout << "HW01. Task 06 (CIRCLE. R=12): \n";
		std::cout << "\n Enter the X-coordinate, please: \t";
		std::cin >> dXcoord;
		std::cout << "\n Enter the Y-coordinate, please: \t";
		std::cin >> dYcoord;
		dRadius = 12.0;
		if ((dXcoord*dXcoord + dYcoord * dYcoord) < (dRadius * dRadius))
		{
			std::cout << "\n You SHOOT the Target\n";
		}
		else
		{
			std::cout << "\n You MISS the Target\n";
		}
		std::cout << "================================= \n\n";
	}

	if (false)
	{
		/*
		HW01. Task 07-1 (???"Fall-Through"???):
		User input the Numbers (int):
		- Day
		- Month
		- Year.
		Calculate the Total number of days since 1st of January of the Year till the specified date.
		Try to use "fall-through"(w/o Break) in the Switch-Case operator.
		*/
		std::cout << "HW01. Task 07-1 (The SUMM of days before specified Date): \n";
		std::cout << "\n Enter the Day, please: \t";
		std::cin >> nDay;
		std::cout << "\n Enter the Month, please: \t";
		std::cin >> nMonth;
		std::cout << "\n Enter the Year, please: \t";
		std::cin >> nYear;
		if (nDay > 0 && nDay <= 31 && nMonth > 0 && nYear >= 0)
		{
			if (nYear % 4 != 0)
			{
				switch (nMonth)
				{
				case 1:
					std::cout << "\n From 01 January till the Specified Date: \t" << nDay << "days\n";
					break;
				case 2:
					if (nDay <= 28)
					{
						std::cout << "\n From 01 January till the Specified Date: \t" <<
							31 + nDay << "days\n";
					}
					else
					{
						std::cout << "\n ERROR! You entered wrong Day Number. Try again. \n";
					}
					break;
				case 3:
				case 4:
				case 5:
				case 6:
				case 7:
				case 8:
				case 10:
				case 12:
					std::cout << "\n From 01 January till the Specified Date: \t" <<
						30 * (nMonth - 1) + nMonth / 2 - 2 + nDay << "days\n";
					break;
				case 9:
				case 11:
					std::cout << "\n From 01 January till the Specified Date: \t" <<
						30 * (nMonth - 1) + (nMonth + 1) / 2 - 2 + nDay << "days\n";
					break;
				default:
					std::cout << "\n ERROR! You entered wrong Number(s). Try again. \n";
					break;
				}
			}
			else
			{
				switch (nMonth)
				{
				case 1:
					std::cout << "\n From 01 January till the Specified Date: \t" << nDay << "days\n";
					break;
				case 2:
					if (nDay <= 29)
					{
						std::cout << "\n From 01 January till the Specified Date: \t" <<
							31 + nDay << "days\n";
					}
					else
					{
						std::cout << "\n ERROR! You entered wrong Day Number. Try again. \n";
					}
					break;
				case 3:
				case 4:
				case 5:
				case 6:
				case 7:
				case 8:
				case 10:
				case 12:
					std::cout << "\n From 01 January till the Specified Date: \t" <<
						30 * (nMonth - 1) + nMonth / 2 - 1 + nDay << "days\n";
					break;
				case 9:
				case 11:
					std::cout << "\n From 01 January till the Specified Date: \t" <<
						30 * (nMonth - 1) + (nMonth + 1) / 2 - 1 + nDay << "days\n";
					break;
				default:
					std::cout << "\n ERROR! You entered wrong Number(s). Try again. \n";
					break;
				}
			}
		}
		else
		{
			std::cout << "\n ERROR! You entered wrong Number(s). Try again. \n";
		}
		std::cout << "================================= \n\n";
	}

	if (false)
	{
		/*
		HW01. Task 07-2 (Approach #2.
		Used minor add to ClassWork - Ternary operator):
		User input the Numbers (int):
		- Day
		- Month
		- Year.
		Calculate the Total number of days since 1st of January of the Year till the specified date.
		Try to use "fall-through"(w/o Break) in the Switch-Case operator.
		*/

		std::cout << "HW01. Task 07-2 (The SUMM of days before specified Date): \n";
		std::cout << "\n Enter the Day, please: \t";
		std::cin >> nDay;
		std::cout << "\n Enter the Month, please: \t";
		std::cin >> nMonth;
		std::cout << "\n Enter the Year, please: \t";
		std::cin >> nYear;

		nDeltaDay = (nYear % 4 == 0) ? 1 : 0;    //used Ternary Operator. Check if LEAP Year.

		if (nYear >= 0 && nDay > 0 && nDay <= 31 && nMonth >= 0)
		{
			if ((nMonth == 2 && nDay > 29 && nDeltaDay == 1) ||
				(nMonth == 2 && nDay > 28 && nDeltaDay == 0) ||
				(((nMonth == 4) || (nMonth == 6) || (nMonth == 9) || (nMonth == 11)) && nDay > 30))
			{
				std::cout << "\n ERROR! You entered wrong DAY. Try again. \n";
			}
			else
			{
				switch (nMonth)
				{
				case 1:
					std::cout << "From 1st January \t:" << nDay << "\t days \n";
					break;
				case 2:
					std::cout << "From 1st January \t:" << 31 + nDay << "\t days \n";
					break;
				case 3:
					std::cout << "From 1st January: \t" << 59 + nDay + nDeltaDay << "\t days \n";
					break;
				case 4:
					nDay = nDay + 31;
					std::cout << "From 1st January: \t" << 90 + nDay + nDeltaDay << "\t days \n";
					break;
				case 5:
					std::cout << "From 1st January: \t" << 120 + nDay + nDeltaDay << "\t days \n";
					break;
				case 6:
					std::cout << "From 1st January: \t" << 151 + nDay + nDeltaDay << "\t days \n";
					break;
				case 7:
					std::cout << "From 1st January: \t" << 181 + nDay + nDeltaDay << "\t days \n";
					break;
				case 8:
					std::cout << "From 1st January: \t" << 212 + nDay + nDeltaDay << "\t days \n";
					break;
				case 9:
					std::cout << "From 1st January: \t" << 243 + nDay + nDeltaDay << "\t days \n";
					break;
				case 10:
					std::cout << "From 1st January: \t" << 273 + nDay + nDeltaDay << "\t days \n";
					break;
				case 11:
					std::cout << "From 1st January: \t" << 304 + nDay + nDeltaDay << "\t days \n";
					break;
				case 12:
					std::cout << "From 1st January: \t" << 334 + nDay + nDeltaDay << "\t days \n";
					break;
				default:
					std::cout << "\n ERROR! You entered wrong Number(s). Try again. \n";
				}
			}
		}
		else
		{
			std::cout << "\n ERROR! You entered wrong Number(s). Try again. \n";
		}

		std::cout << "================================= \n\n";
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
