// Write a program to compare two objects of a class that contains an integer value as its data member.
// Make overloading functions to overload equality(==), less than(<), greater than(>), not equal (!=),
//  greater than or equal to (>=), and less than or equal to(<=) operators using member operator functions.
#include <iostream>
using namespace std;

class compare
{
    int x;

public:
    compare()
    {
        x = 0;
    }
    compare(int m)
    {
        x = m;
    }
    int operator==(compare const &k)
    {
        if (x == k.x)
            return 1;
        else
            return 0;
    }
    int operator!=(compare const &l)
    {
        if (x != l.x)
            return 1;
        else
            return 0;
    }
    int operator<(compare l)
    {
        if (x < l.x)
            return 1;
        else
            return 0;
    }
    int operator>(compare const &l)
    {
        if (x > l.x)
            return 1;
        else
            return 0;
    }
    int operator<=(compare const &l)
    {
        if (x <= l.x)
            return 1;
        else
            return 0;
    }
    int operator>=(compare const &l)
    {
        if (x >= l.x)
            return 1;
        else
            return 0;
    }
};

int main()
{
    compare a(1), b(2);
    if (a == b)
    {
        cout << "Same" << endl;
    }
    // else if (a != b)
    // {
    //     cout << "Not Equal" << endl;
    // }
    else if (a > b)
    {
        cout << "A is greater than B";
    }
    else if (a < b)
    {
        cout << "b is greater than B";
    }
    else if (a >= b)
    {
        cout << "A is greater than and equal to B";
    }
    else if (a <= b)
    {
        cout << "A is less than and equal B";
    }
    return 0;
}