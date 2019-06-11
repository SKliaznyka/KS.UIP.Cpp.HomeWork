// KS.UIP.Cpp.HomeWork.HW07.PointersCharTask01.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

//HomeWork 07. Task 01.
//Input Sentence. Initiated sentence is Ok.
//Input letter
//Output number of words started with this letter.
//


#include "pch.h"
#include <iostream>
#include <cstring>

int main()
{
	char str[255];
	
	char sLetter[2];
	std::cout << "Input Sentence:\t";
	std::cin.getline(str, 255);
	std::cout << std::endl;
	
	std::cout << "Input Letter:\t";
	std::cin.getline(sLetter, 2);
	std::cout << std::endl;

	int iLenStr;
	int iCount(0);

	iLenStr = strlen(str);
	for (int i = 0; i < iLenStr; ++i)
	{
		if (i == 0 && str[i] == *sLetter)
		{
			++iCount;
		}
		else if (str[i] == *sLetter && str[i - 1] == ' ')
		{
			++iCount;
		}
	}

	std::cout << "Number of words started from your letter:\t";
	std::cout << iCount << std::endl << std::endl;
	

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
