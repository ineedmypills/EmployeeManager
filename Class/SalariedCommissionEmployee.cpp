#include "SalariedCommissionEmployee.h"

SalariedCommissionEmployee::SalariedCommissionEmployee(std::string_view name, double salary, double grossSales, double commissionRate) : SalariedEmployee(name, salary)
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
}

double SalariedCommissionEmployee::Earnings() const
{
	return SalariedEmployee::Earnings() + grossSales * commissionRate;
}

std::string SalariedCommissionEmployee::toString() const
{
	return std::format("{}Премия: {}\nКоммиссия: {}\nИтого: {}\n", SalariedEmployee::toString(), grossSales, commissionRate, Earnings());
}
