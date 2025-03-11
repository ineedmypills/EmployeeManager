#include "Employee.hpp"

std::string Employee::toString() const
{
    return std::format("Имя: {}", name);
}
