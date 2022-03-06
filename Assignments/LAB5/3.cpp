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
};

int main()
{
    compare a(2), b(2);
    if (a == b)
    {
        cout << "Same" << endl;
    }
    else
    {
        cout << "Not Equal" << endl;
    }
    return 0;
}