// KS.UIP.Cpp.HomeWork.HW0.06.CharArrayTask05.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>

int main()
{
	std::cout << "HW 06. Task 05. Words in reverse sequence" << std::endl;

	char sSentence[] = "people are strange";
	int LengthSentence(0);
	
	LengthSentence = strlen(sSentence);
	int iIndexSpace(0);
	for (int i = 0; i < LengthSentence; ++i)
	{
		if (sSentence[i] == ' ')
		{
			iIndexSpace = i;
		}
		//(sSentence[i] == ' ') ? ++iIndexSpace : iIndexSpace;
	}

	for (int i = LengthSentence - 1; i >= 0; --i)
	{
		if (sSentence[i] == ' ')
		{
			sSentence[i] = '\0';
			std::cout << sSentence + i + 1 << std::endl << std::endl;
		}
	}

	std::cout << iIndexSpace;
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
