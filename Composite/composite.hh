#ifndef composite_hh
#define composite_hh

#include <string>
#include <vector>

class Employee
{
public:
    Employee(std::string name, int salary);
    virtual ~Employee(){};
    int getSalary();
    void setSalary(int);
    std::string getName();
    void setName(std::string);
    virtual std::string getRole()=0;
    virtual void printEmployee()=0;
private:
    std::string mName;
    int mSalary;
};

class Designer : public Employee
{
public:
    Designer(std::string name, int salary);
    std::string getRole();
    void printEmployee();
};

class Developer : public Employee
{
public:
    Developer(std::string name, int salary);
    std::string getRole();
    void printEmployee();
};

class Business
{
public:
    ~Business();
    void addEmployee(Employee* employee);
    int getNetSalaries();
private:
    std::vector<Employee*> mEmployees;
};

#endif // composite_hh
