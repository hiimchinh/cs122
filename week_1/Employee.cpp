#include "Employee.h"
#include <iostream>

using namespace std;

void useEmployeeClass()
{
    Employee chinh = Employee("Chinh Hoang", 99, "Product", "Software Engineer");
    Employee huyDau = Employee();
    huyDau.setName("Huy Dau");
    huyDau.setIdNumber(1);
    huyDau.setDepartment("BOD");
    huyDau.setPosition("CEO");
    Employee soaLe("Soa Le", 2);
    soaLe.setDepartment("Marketing");
    soaLe.setPosition("Manager");
    cout << chinh.print() << endl;
    cout << huyDau.print() << endl;
    cout << soaLe.print() << endl;
}

Employee::Employee()
{
    this->idNumber = 0;
}

Employee::Employee(string n, int id, string depart, string pos)
{
    name = n;
    idNumber = id;
    department = depart;
    position = pos;
}

Employee::Employee(string n, int id)
{
    name = n;
    idNumber = id;
}

string Employee::print()
{
    return "Name: " + getName() + ", ID: " + getId() + ", department: " + getDepartment() + ", position: " + getPosition();
}

void Employee::setName(string n)
{
    name = n;
}
void Employee::setIdNumber(int id)
{
    idNumber = id;
}
void Employee::setDepartment(string dep)
{
    department = dep;
}
void Employee::setPosition(string pos)
{
    position = pos;
}
