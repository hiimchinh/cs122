using namespace std;

class Date
{

private:
  int date, month, year;

public:
  Date(int d, int m, int y)
  {
    date = d;
    month = m;
    year = y;
  }
  string print()
  {
    return to_string(date) + '/' + to_string(month) + '/' + to_string(year) + '\n';
  }

  string printVnFormat()
  {
    return "Ngày " + to_string(date) + " Tháng " + to_string(month) + ", " + to_string(year) + '\n';
  }
};