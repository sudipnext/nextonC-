//adding two dates using necessary member function
#include <iostream>
using namespace std;

class time
{
    int hour, minute, second, day;

public:
    time()
    {
        hour = 0;
        minute = 0;
        second = 0;
        day = 0;
    }
    void getData()
    {
        cout << "Enter the date in day, hour, minute and second respectively:-" << endl;
        cin >> day >> hour >> minute >> second;
    }
    time add(time a, time b)
    {
        time temp;
        temp.second = a.second + b.second;
        temp.minute = a.minute + b.minute;
        temp.hour = a.hour + b.hour;
        temp.day = a.day + b.day;
        if (temp.second >= 60)
        {

            temp.second -= ((temp.second / 60)*60);
            temp.minute += temp.second / 60;
        }
        else if (temp.minute >= 60)
        {

            temp.minute -= ((temp.minute / 60)*60);
            temp.hour += temp.minute / 60;
        }
        else if (temp.hour >= 24)
        {


            temp.hour -= ((temp.hour / 24)*24);
            temp.day += temp.hour / 24;
        }
        return temp;
    }
    void display()
    {
        cout << "The result is day:- " << day << " hour:- " << hour << " minute:- " << minute << " second:- " << second << endl;
    }
};

int main()
{
    time obj1, obj2, obj3;
    obj1.getData();
    obj2.getData();
    obj3 = obj3.add(obj1, obj2);
    obj3.display();
}