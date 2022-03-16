// Write a program to create a class shape with functions to find the area of the shapes and display the names of the shapes
//  and other essential components of the class. Create derived classes circle, rectangle, and trapezoid each having overriding
//  functions area() and display(). Write a suitable program to illustrate virtual functions and virtual destructors.
#include <iostream>
using namespace std;
class shape
{
    string name;

public:
    void getData()
    {
        cout << "Enter the name of the shape" << endl;
        cin >> name;
    }

    virtual int area()
    {
        cout << "Thj";
    }
    virtual void display()
    {
        cout << "dummy";
    }
    virtual ~shape()
    {
        cout << "Destroyed";
    }
};
class circle : public shape
{
    int a, r;

public:
    void getData()
    {
        shape::getData();
        cout << "Enter the radius of the circle" << endl;
        cin >> r;
    }
    int area()
    {
        a = 3.14 * r * r;
        return a;
    }
    void display()
    {
        cout << "The area of the circle is " << area();
    }
    ~circle()
    {
        cout << "Destructor in circle";
    }
};
class rectangle : public shape
{
    int a, l = 12, b = 6;

public:
    int area()
    {
        a = l * b;
        return a;
    }
    void display()
    {
        cout << "The area of the rectangle is " << area() << endl;
    }
};

int main()
{
    circle c, d;
    rectangle r;
    c.getData();
    c.display();
    r.display();
}