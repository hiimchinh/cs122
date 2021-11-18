#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <string>
using namespace std;


class Employee
{
  private:
    int idNumber;
    string name, department, position;
  public:
    Employee(string name, int id, string department, string position);
    Employee(string name, int id);
    Employee();
    string print();
    void setName(string name);
    void setIdNumber(int id);
    void setDepartment(string department);
    void setPosition(string position);
    string getName() const { return name; }
    string getId() const { return to_string(idNumber); }
    string getDepartment() const { return department; }
    string getPosition() const { return position; }
};

#endif