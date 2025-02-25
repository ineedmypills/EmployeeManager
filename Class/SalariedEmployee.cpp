#include "SalariedEmployee.h"

SalariedEmployee::SalariedEmployee(std::string_view name, double salary)
{
	if (name.size() < 3) {
		throw std::invalid_argument("\n���? ��� ���?..\n");
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
		throw std::invalid_argument("\n���? ��� ���?..\n");
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
		throw std::invalid_argument("\n�������� �� ����� ���� �������������.\n��������� ����...\n");
	}
	this->salary = salary;
}

double SalariedEmployee::Earnings() const
{
	return salary;
}

std::string SalariedEmployee::toString() const
{
	return std::format("���: {}\n�����: {}\n", this->name, this->salary);
}
