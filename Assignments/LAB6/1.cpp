// Write a program that can convert the Distance (meter, centimeter) to meters measurement in float and vice versa.
//  Make a class distance with two data members, meter and centimeter. You can add function members as per your requirement.
#include <iostream>
using namespace std;
class distancet
{
    float meter, centimeter;

public:
    distancet()
    {
        meter = 0;
        centimeter = 0;
    }
    void getData()
    {
        cout << "Enter the value in meter ";
        cin >> meter;
        cout << "Enter the value in centimeter ";
        cin >> centimeter;
    }
    operator float()
    {
        float met;
        met = meter + centimeter / 100.0;
        return met;
    }
    void display()
    {

        cout << "Meter: " << meter << "\n" << " Centimeter: " << centimeter;
    }
};

int main()
{
    distancet d, e;
    d.getData();
    d.display();
    

}