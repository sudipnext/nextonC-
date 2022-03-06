// Write a class to store x, y, and z coordinates of a point in three-dimensional space.
//  addition and subtraction operators for addition and subtraction of two coordinate objects.
// Implement the operator functions as non-member functions (friend operator functions).
#include <iostream>
using namespace std;
class store
{
    int x, y, z;

public:

    store(int x1 = 0, int y1 = 0, int z1 = 0)
    {
        x = x1;
        y = y1;
        z = z1;
    }
    void print() { cout << x << endl << y << endl << z; }
    friend store operator+(store const &, store const &);
    friend store operator-(store const &, store const &);
};

store operator+(store const &c1, store const &c2)
{
    return store(c1.x + c2.x,  c1.y+c2.y, c1.z + c2.z);
}
store operator-(store const &c1, store const &c2)
{
    return store(c1.x - c2.x,  c1.y-c2.y, c1.z - c2.z);
}

int main()
{
    store c1(10, 6, 2), c2(2, 4, 3);
    store c4 = c1 + c2;
    c4.print();
    store c3= c1-c2;
    cout << endl;
    c3.print();

    return 0;
}