#include <iostream>
using namespace std;
class Date
{
private:
    int day, month, year;

public:
    Date() : day(0), month(0), year(0) {}
    Date(int d, int m, int y) : day(d), month(m), year(y) {}
    Date operator++()
    {
        ++day;
        if (day > 30)
        {
            ++month;
            day -= 30;
        }
        if (month > 12)
        {
            ++year;
            month -= 12;
        }
        return Date(day, month, year);
    }
    Date operator++(int)
    {
        day++;
        if (day > 30)
        {
            month++;
            day -= 30;
        }
        if (month > 12)
        {
            year++;
            month -= 12;
        }
        return Date(day, month, year);
    }
    void showdate()
    {
        cout << "Date is: " << year << "/" << month << "/" << day << endl;
    }
};
int main()
{
    Date d(30, 12, 2010);
    d++;
    ++d;
    d.showdate();
    return 0;
}