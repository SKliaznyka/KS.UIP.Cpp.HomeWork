// KS.UIP.Cpp.HomeWork.HW06.CharArrayTask02.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

//HomeWork 06. Task 02.
//Input Word.
//Output word in reverse direction
//


#include "pch.h"
#include <iostream>

int main()
{
	std::cout << "HW 06. Task 02. Reverse word:" << std::endl;

	char sWord[50];
	char sReverseWord[50];
	int LengthWord(0);

	std::cout << "Enter Word:\t";
	std::cin >> sWord;
	std::cout << std::endl << std::endl;
	
	LengthWord = strlen(sWord);
	
	for (int i = 0; i < LengthWord; ++i)
	{
		sReverseWord[i] = sWord[LengthWord - 1 - i];
	}
	std::cout << "Reverse word:\t";
	for (int i = 0; i < LengthWord; ++i)
	{
		std::cout << sReverseWord[i];
	}
	std::cout << std::endl << std::endl;
	std::cout << "============================" << std::endl;

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
