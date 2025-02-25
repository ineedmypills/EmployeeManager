#ifndef _SALARIED_EMPLOYEE_H_
#define _SALARIED_EMPLOYEE_H_
#include <iostream>
#include <string>
#include <string_view>
#include <format>

class SalariedEmployee
{
public:
	SalariedEmployee(std::string_view name, double salary);

	std::string GetName() const;
	void SetName(std::string_view name);

	double GetSalary() const;
	void SetSalary(double salary);

	double Earnings() const;
	std::string toString() const;


private:
	std::string name{};
	double salary{ 0.0 };
};

#endif // !_SALARIED_EMPLOYEE_H_