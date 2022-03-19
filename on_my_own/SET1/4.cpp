// operator overloading in c++
#include <iostream>
using namespace std;
class complex
{
    int real, img;

public:
    complex()
    {
        real = 0;
        img = 0;
    }
    void getData()
    {
        cout << "Enter the real part :- " << endl;
        cin >> real;
        cout << "Enter the img part:- " << endl;
        cin >> img;
    }
    complex operator+(complex &x)
    {
        complex temp;
        temp.real = x.real + real;
        temp.img = x.img + img;
        return temp;
    }
    void display()
    {
        cout << "The ans are :- " << real << "   " << img << endl;
    }
};
int main()
{
    complex obj1, obj2, obj3;
    obj1.getData();
    obj2.getData();
    obj3 = obj1 + obj2;
    obj3.display();
    return 0;
}