// KS.UIP.Cpp.HomeWork.HW11.CharEnumArrayTask02.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
//HomeWork 11. Task 02.
//Generate a Password.
//Password rule:
// - 12 symbols;
// - regular letters;
// - capital letters;
// - digits.
//Ask user enter a password. Ask user to enter a password until it match the generated one.


#include "pch.h"
#include <iostream>
#include <string>

void passwordGen(char Password[], int PasswordSize);
void outputGenPassword(char Password[], int PasswordSize);
void checkPassword(char GenPassword[], char UserPassword[], int PasswordSize);

enum eGroups { capitalLetter, regularLetter, Digits };

int main()
{
	const int iPasswordSize(7);

	std::cout << "Homework 11. Task 02" << std::endl;
	std::cout << "Have a generated password. User should enter correct Password.";
	std::cout << std::endl << std::endl;

	char cGenPassword[iPasswordSize] = { '\0' };
	passwordGen(cGenPassword, iPasswordSize);
	outputGenPassword(cGenPassword, iPasswordSize);

	char cUserPassword[15] = { '\0' };

	do
	{
		std::cout << "Enter the password:" << std::endl;
		std::cin >> cUserPassword;

		checkPassword(cGenPassword, cUserPassword, iPasswordSize);
	} while (strcmp(cGenPassword, cUserPassword) != 0);
	
	return 0; 
}

void passwordGen(char Password[], int PasswordSize)
{
	int nGroup;
	
	for (int i = 0; i < PasswordSize; ++i)
	{
		//Password[i] = rand() % 26 + 97;
		nGroup = rand() % 3;
		switch (nGroup)
		{
		    case regularLetter:
		    {
			    Password[i] = rand() % 26 + 97;
				break;
		    }
		    case capitalLetter:
		    {
			    Password[i] = rand() % 26 + 65;
				break;
		    }
		    case Digits:
		    {
			    Password[i] = rand() % 10 + 48;
				break;
		    }
		}
	}
	Password[PasswordSize - 1] = '\0';
}

void outputGenPassword(char Password[], int PasswordSize)
{
	std::cout << "Generated Password:" << std::endl;
	for (int i = 0; i < PasswordSize; ++i)
	{
		std::cout << Password[i];
	}
	std::cout << std::endl << std::endl;
}

void checkPassword(char GenPassword[], char UserPassword[], int PasswordSize)
{
	if (strcmp(GenPassword, UserPassword) == 0)
	{
		std::cout << std::endl << "Password is correct.";
	}
	else
	{
		std::cout << std::endl << "ERROR. Password is incorrect. Try Again.";
	}
	std::cout << std::endl;
	std::cout << "----------------------------------------" << std::endl << std::endl;
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
