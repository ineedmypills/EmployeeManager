#include "SalariedEmployee.h"

SalariedEmployee::SalariedEmployee(std::string_view name, double salary)
{
	if (name.size() < 3) {
		throw std::invalid_argument("\nХто? Это как?..\n");
	}
	this->name = name;
	this->salary = salary;
}

std::string SalariedEmployee::GetName() const
{
	return name;
}

void SalariedEmployee::SetName(std::string_view name)
{
	if (name.size() < 3) {
		throw std::invalid_argument("\nХто? Это как?..\n");
	}
	this->name = name;
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
	return std::format("Имя: {}\nОклад: {}\n", this->name, this->salary);
}
