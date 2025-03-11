#include "SalariedCommissionEmployee.h"

SalariedCommissionEmployee::SalariedCommissionEmployee(std::string_view name, double grossSales, double commissionRate) : Employee(name)
{
	SetGrossSales(grossSales);
	SetCommissionRate(commissionRate);
}

double SalariedCommissionEmployee::GetGrossSales()
{
	return grossSales;
}

void SalariedCommissionEmployee::SetGrossSales(double grossSales)
{
	if (grossSales < 0.0) {
		throw std::invalid_argument("\nМала!! >:(\n");
	}
	this->grossSales;
}

double SalariedCommissionEmployee::GetCommissionRate()
{
	return commissionRate;
}

void SalariedCommissionEmployee::SetCommissionRate(double commissionRate)
{
	if (commissionRate < 0.0 || commissionRate > 1.0) {
		throw std::invalid_argument("Чаво?..");
	}
	this->commissionRate = commissionRate;
}

double SalariedCommissionEmployee::Earnings() const
{
	return grossSales * commissionRate;
}

std::string SalariedCommissionEmployee::toString() const
{
	return std::format("{}Обьем продаж: {}\nПроцент: {}\nЗарплата: {}\n", Employee::toString(), grossSales, commissionRate, Earnings());
}
