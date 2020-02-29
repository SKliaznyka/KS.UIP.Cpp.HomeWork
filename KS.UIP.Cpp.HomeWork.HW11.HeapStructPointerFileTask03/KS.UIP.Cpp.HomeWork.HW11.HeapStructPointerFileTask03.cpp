// KS.UIP.Cpp.HomeWork.HW11.HeapStructPointerFileTask03.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

//Home Work 11. Task 03.
//Given structure Employee. 
//Employee contain char m_surname[25], int m_age.
//Load into memory "employeeBase.mb".
//Data in file has been written from Structure Array "Employee".
// 1)Show the data on screen.
// 2)Create function searchEmployeeBySurName, 
//   Function inputs: Structure Array, Surname.
//   - function find first input of input Surname;
//   - function returns Pointer on founded Employee;
//   - function returns nullptr in case not found the Employee.


#include "pch.h"
#include <iostream>

struct Employee
{
	char m_surname[25] = { "NULL" };
	int m_age = {0};
};

int main()
{
	std::cout << "Homework 11. Task 03." << std::endl << std::endl;
	
	Employee Person;
	std::cout << "Surname:\t" << Person.m_surname << std::endl;
	std::cout << "Age:\t" << Person.m_age << std::endl;
	
	FILE *pFile;
	errno_t error;
	error = fopen_s(&pFile, "D:\\CppLang\\employeeBase.txt", "rb");
	if (error != 0)
	{
		fseek(pFile, 0, SEEK_SET);
		int nCurentPosition = ftell(pFile);
		std::cout << "Curent pos:\t" << nCurentPosition << std::endl;
		std::cout << "error status:\t" << error << std::endl;

		fclose(pFile);
	}
	std::cout << "error status:\t" << error << std::endl;
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
