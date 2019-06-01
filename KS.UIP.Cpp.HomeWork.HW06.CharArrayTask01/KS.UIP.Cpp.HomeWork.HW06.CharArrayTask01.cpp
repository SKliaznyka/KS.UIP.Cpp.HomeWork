// KS.UIP.Cpp.HomeWork.HW06.CharArrayTask01.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

//HomeWork 06. Task 01.
//Input Password.
//Input Confirm Password
//Check IF password - correct
//


#include "pch.h"
#include <iostream>

//Global constants:


//FUNCTION Declarations:

//MAIN:
int main()
{
	std::cout << "HW 06. Task 01. Password check:" << std::endl;

	char sPassword[50];
	char sCheckPassword[50];
	int LengthWord1(0),
		LengthWord2(0);

	std::cout << "Enter Password:\t";
	std::cin >> sPassword;
	std::cout << std::endl << std::endl;
	std::cout << "Confirm Password:\t";
	std::cin >> sCheckPassword;
	std::cout << std::endl << std::endl;
	LengthWord1 = strlen(sPassword);
	LengthWord2 = strlen(sCheckPassword);

	if (LengthWord1 != LengthWord2)
	{
		std::cout << "Password Check Incorrect" << std::endl << std::endl;
	}
	else
	{
		int Equality(1),
			Count(0);
		while (Equality == 1 && Count < LengthWord1)
		{
			Equality = (sPassword[Count] == sCheckPassword[Count]) ? 1 : 0;
			++Count;
		}
		if (Equality == 1)
		{
			std::cout << "Password Check Correct" << std::endl << std::endl;
		}
		else
		{
			std::cout << "Password Check Incorrect" << std::endl << std::endl;
		}
	}
	return 0;
}


//FUNCTION body:


// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
