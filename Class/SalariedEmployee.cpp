#include "SalariedEmployee.h"

SalariedEmployee::SalariedEmployee(std::string_view name, double salary) : Employee{name}
{
	SetSalary(salary);
}

double SalariedEmployee::GetSalary() const
{
	return salary;
}

void SalariedEmployee::SetSalary(double salary)
{
	if (salary < 0.0) {
		throw std::invalid_argument("\nЗарплата не может быть отрицательной.\nПобойтесь бога...\n");
	}
	this->salary = salary;
}

double SalariedEmployee::Earnings() const
{
	return salary;
}

std::string SalariedEmployee::toString() const
{
	return std::format("{}\nЗарплата: {}\n", toString(), GetSalary());
}
