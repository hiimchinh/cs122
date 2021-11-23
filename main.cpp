#include <iostream>
#include "week_1/Date.h"
#include "week_1/Employee.h"
#include "week_1/Inventory.h"

void useDateClass();
void useEmployeeClass();
void useInventoryClass();
using namespace std;

int main()
{
  useInventoryClass();
  return 0;
}

void useDateClass()
{
  int date, month, year;
  int loopTimes = 0;
  cout << "Nhập ngày sinh của bạn: ";
  cin >> date;
  while (date > 31 || date < 1)
  {
    cout << "Ngày sinh không được lớn hơn 31 hoặc nhỏ hơn 1. ";
    cout << "Mời bạn nhập lại ngày sinh: ";
    cin >> date;
  }
  cout << "Nhập tháng sinh của bạn: ";
  cin >> month;
  while (month > 12 || month < 1)
  {
    cout << "Tháng sinh không được lớn hơn 12 hoặc nhỏ hơn 1. ";
    cout << "Mời bạn nhập lại tháng sinh: ";
    cin >> month;
  }

  cout << "Mời bạn nhập năm sinh của bạn: ";
  cin >> year;

  Date birthday(date, month, year);
  cout << birthday.printVnFormat();
}

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

void useInventoryClass()
{
  Inventory item;
  int itemNumber, quantity;
  double cost;
  cout << "Please input item number of the item: ";
  cin >> itemNumber;
  item.setItemNumber(itemNumber);
  cout << "Please input cost of the item: ";
  cin >> cost;
  item.setCost(cost);
  cout << "Please input quantiy of the item: ";
  cin >> quantity;
  item.setQuantity(quantity);
  cout << "Item number is: " << item.getItemNumber() << endl;
  cout << "Cost: " << item.getCost() << endl;
  cout << "Quantity: " << item.getQuantity() << endl;
  cout << "Total cost is: " << item.getTotalCost() << endl;
}

