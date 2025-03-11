#ifndef _SALARIED_EMPLOYEE_H_
#define _SALARIED_EMPLOYEE_H_
#include "Employee.hpp"
#include <iostream>
#include <string>
#include <string_view>
#include <format>

class SalariedEmployee final : public Employee
{
public:
	SalariedEmployee(std::string_view name, double salary);

	

	double GetSalary() const;
	void SetSalary(double salary);

	double Earnings() const override;
	std::string toString() const override;


private:
	double salary{ 0.0 };
};

#endif // !_SALARIED_EMPLOYEE_H_