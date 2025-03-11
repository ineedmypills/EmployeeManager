#pragma once
#include<string>
#include<string_view>
#include<format>

class Employee
{
public:
	explicit Employee(std::string_view name) : name{ name } {};
	virtual ~Employee() = default;
	void SetName(std::string_view name) { this->name = name; };
	std::string GetName() { return this->name; };
	virtual std::string toString() const;
	virtual double Earnings() const = 0;


private:
	std::string name;

};

