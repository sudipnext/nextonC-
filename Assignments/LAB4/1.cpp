// Write a program that has a class to represent time. The class should have constructors
// to initialize data members hour, minute, and second to 0 and to initialize them to values
//  passed as arguments. The class should have a member function to add time objects and return the result as a time object.
// There should be functions to display time in 12-hour and 24-hour format.
#include <iostream>
using namespace std;
class Time
{
private:
    int hour, minute, second;

public:
    Time()
    {
        hour = 0;
        minute = 0;
        second = 0;
    }
    int getData(int x, int y, int z)
    {
        hour = x;
        minute = y;
        second = z;
    }
    void display()
    {
        cout << "Time is \t";
        cout << hour << ":" << minute << ":" << second << endl;
    }

    void addTime(Time x, Time y)
    {
        second = x.second + y.second;
        minute = x.minute + y.minute;
        if (second > 60)
        {
            second %= 60;
            minute++;
        }
        if (minute > 60)
        {
            minute %= 60;
            hour++;
        }
        hour = x.hour + y.hour;
        int temp = hour;
        if (hour > 12 && hour < 24)
        {
            hour %= 12;
            cout << "In 12 hr format \t";
            cout << hour << ":" << minute << ":" << second << endl;
        }
        if (temp > 24)
        {
            hour %= 24;
            cout << "In 24hr format \t";
            cout << hour << ":" << minute << ":" << second << endl;
        }
    }
};
int main()
{
    // variable declaration
    int a, i, j;
    Time obj, obj2;
    obj.getData(12, 13, 34);
    obj2.getData(24, 13, 7);
    obj.display();
    obj2.display();
    obj.addTime(obj, obj2);

    return 0;
}