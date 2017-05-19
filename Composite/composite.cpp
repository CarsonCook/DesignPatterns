#include "composite.hh"
#include <string>
#include <iostream>
#include <vector>

Employee::Employee(std::string name, int salary)
{
    mName=name;
    mSalary=salary;
}

void Employee::setName(std::string name)
{
    mName=name;
}

std::string Employee::getName()
{
    return mName;
}

void Employee::setSalary(int salary)
{
    mSalary=salary;
}

int Employee::getSalary()
{
    return mSalary;
}

Designer::Designer(std::string name, int salary):Employee(name,salary){};

std::string Designer::getRole()
{
    return "Designer";
}

void Designer::printEmployee()
{
    std::cout << getName() << " " << getRole() << " " << getSalary() << std::endl;
}

Developer::Developer(std::string name, int salary):Employee(name,salary){};

std::string Developer::getRole()
{
    return "Developer";
}

void Developer::printEmployee()
{
    std::cout << getName() << " " << getRole() << " " << getSalary() << std::endl;
}

Business::~Business()
{
    for (int i=0; i<mEmployees.size(); i++)
    {
        delete mEmployees[i];
    }
}

void Business::addEmployee(Employee* employee)
{
    mEmployees.push_back(employee);
}

int Business::getNetSalaries()
{
    int salarySum=0;
    for (Employee* employee:mEmployees)
    {
        salarySum+=employee->getSalary();
    }
    return salarySum;
}

void Business::printEmployees()
{
    for (Employee* employee:mEmployees)
    {
        employee->printEmployee();
    }
}
