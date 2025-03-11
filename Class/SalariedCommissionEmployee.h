#ifndef _SALARIED_COMMISSION_EMPLOYEE_H_
#define _SALARIED_COMMISSION_EMPLOYEE_H_
#include "SalariedEmployee.h"
#include "Employee.hpp"
class SalariedCommissionEmployee final : public Employee
{
public:
	SalariedCommissionEmployee(std::string_view name, double grossSales, double commissionRate);

	double GetGrossSales();
	void SetGrossSales(double grossSales);
	
	double GetCommissionRate();
	void SetCommissionRate(double commissionRate);

	double Earnings() const override;
	std::string toString() const override;
	
private:
	double grossSales{ 0.0 };
	double commissionRate{ 0.0 };
};

#endif //!_SALARIED_COMMISSION_EMPLOYEE_H_