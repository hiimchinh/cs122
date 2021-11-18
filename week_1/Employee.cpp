#include "Employee.h"
#include <stdio.h>

using namespace std;

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
