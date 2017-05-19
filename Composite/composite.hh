#ifndef composite_hh
#define composite_hh

#include <string>

class Employee
{
public:
    Employee(std::string name);
    virtual int getSalary()=0;
    std::string getName();
    void setName(std::string);
    virtual std::string getRole()=0;
    virtual void printEmployee()=0;
private:
    std::string mName;
};

#endif // composite_hh
