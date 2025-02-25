#ifndef _SALARIED_COMMISSION_EMPLOYEE_H_
#define _SALARIED_COMMISSION_EMPLOYEE_H_
#include "SalariedEmployee.h"
class SalariedCommissionEmployee : public SalariedEmployee
{
public:
	SalariedCommissionEmployee(std::string_view name, double salary, double grossSales, double commissionRate);

	double GetGrossSales();
	void SetGrossSales(double grossSales);
	
	double GetCommissionRate();
	void SetCommissionRate(double commissionRate);

	double Earnings() const;
	std::string toString() const;
	
private:
	double grossSales{ 0.0 };
	double commissionRate{ 0.0 };
};

#endif //!_SALARIED_COMMISSION_EMPLOYEE_H_