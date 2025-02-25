#include "SalariedEmployee.h"
#include "SalariedCommissionEmployee.h"
#include <Windows.h>

int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	SalariedEmployee Employee1("≈гор", 12000);
	std::string test1 = Employee1.toString();
	std::cout << test1 << std::endl;

	SalariedCommissionEmployee Employee2("Ќе≈гор", 32000, 5000, 0.4);
	std::string test2 = Employee2.toString();
	std::cout << test2 << std::endl;

}