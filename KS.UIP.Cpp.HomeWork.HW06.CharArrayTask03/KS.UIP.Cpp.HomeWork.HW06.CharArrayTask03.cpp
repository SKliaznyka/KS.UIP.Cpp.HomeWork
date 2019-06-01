// KS.UIP.Cpp.HomeWork.HW06.CharArrayTask03.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

//HomeWork 06. Task 03.
//Input Sentence.
//Output number of words
//

#include "pch.h"
#include <iostream>

int main()
{
	std::cout << "HW 06. Task 03. How many words in sentence?" << std::endl;

	char sSentence[100];
	int LengthSentence(0);

	std::cout << "Enter sentence:\t";
	std::cin >> sSentence;
	std::cout << std::endl << std::endl;

	LengthSentence = strlen(sSentence);
	int iCount(0);
	
	for (int i = 0; i < LengthSentence; ++i)
	{
		
		if (sSentence[i] == ' ' || sSentence[i] == '\0')
		{
			iCount = iCount + 1;
		}
	}
	std::cout << "Number of Words:\t" << iCount << std::endl << std::endl;
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
