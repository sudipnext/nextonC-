// Write a class for instantiating the objects that represent the two-dimensional Cartesian coordinate system.
// A. Make a particular member function of one class as a friend function of another class for addition.
// B. Make the other three functions to work as a bridge between the classes for multiplication, division, and subtraction.
// C. Also write a small program to demonstrate that all the member functions of one class are the friend functions of another
// class if the former class is made friend to the latter.
// Make least possible classes to demonstrate all the above in a single program without conflict.
#include <iostream>
using namespace std;
class nexty;
class Cartesian
{
    int x, y;

public:
    void getData(int a, int b)
    {
        x = a;
        y = b;
    }
    int add(Cartesian a, nexty b);
    friend int sub(Cartesian a, nexty b);
    friend int multi(Cartesian a, nexty b);
    friend int div(Cartesian a, nexty b);
};
class nexty
{
    int x, y;

public:
    void getData(int a, int b)
    {
        x = a;
        y = b;
    }
    friend int Cartesian::add(Cartesian a, nexty b);
    friend int sub(Cartesian a, nexty b);
    friend int multi(Cartesian a, nexty b);
    friend int div(Cartesian a, nexty b);
};
int Cartesian::add(Cartesian a, nexty b)
{
    int x = a.x + b.x;
    int y = a.y + b.y;
    cout << "sum is  " << x << endl
         << y;
};
int sub(Cartesian a, nexty b)
{
    int x = a.x - b.x;
    int y = a.y - b.y;
    cout << "Subtraction :- " << x << endl
         << y<<endl;
}
int multi(Cartesian a, nexty b)
{
    int x = a.x * b.x;
    int y = a.y * b.y;
    cout << "MULTIPLICATION :- " << x << endl
         << y<<endl;
}
int div(Cartesian a, nexty b)
{
    int x = a.x / b.x;
    int y = a.y / b.y;
    cout << "DIVISION :- " << x << endl
         << y<<endl;
}

int main()
{
    int m, n, y, t;
    Cartesian a, c;
    nexty b;
    cout << "Enter the x and y coordinates respectively. " << endl;
    cin >> m >> n;
    cout << "Enter the second x, y cordinate respectively." << endl;
    cin >> y >> t;
    a.getData(m, n);
    b.getData(y, t);
    c.add(a, b);
    sub(a, b);
    div(a, b);
    multi(a, b);
    return 0;
}