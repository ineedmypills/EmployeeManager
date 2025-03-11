#include "SalariedEmployee.h"
#include "SalariedCommissionEmployee.h"
#include <Windows.h>
#include <vector>

void VirtualTestPointer(const Employee* employeePtr);
void VirtualTestReferens(const Employee& employeeRef);

int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);


	/*
	SalariedEmployee Employee1("Егор", 12000);
	std::string test1 = Employee1.toString();
	std::cout << test1 << std::endl;

	SalariedCommissionEmployee Employee2("НеЕгор", 32000, 5000, 0.4);
	std::string test2 = Employee2.toString();
	std::cout << test2 << std::endl;
	*/
	

	SalariedEmployee one("Пахом", 777);
	SalariedCommissionEmployee two("Епифан", 300000, 0.07);

	std::vector <Employee*> all{ &one, &two };

	for (const auto i : all)
	{
		VirtualTestPointer(i);
	}

	std::cout << "\n\n\n";

	for (const Employee* i : all)
	{
		VirtualTestReferens(*i);
	}

	return 0;
}

void VirtualTestPointer(const Employee* employeePtr)
{
	std::cout << employeePtr->toString() << employeePtr->Earnings()<< "\n";
}

void VirtualTestReferens(const Employee& employeeRef)
{
	std::cout << employeeRef.toString() << employeeRef.Earnings() << "\n";
}
