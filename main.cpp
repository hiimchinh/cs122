#include <iostream>
#include "week_1/Date.h"

void useDateClass();
using namespace std;

int main()
{
  useDateClass();
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