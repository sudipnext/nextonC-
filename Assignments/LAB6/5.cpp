// Write a base class that asks the user to enter a complex number and make a derived class that adds the complex number
//  of its own with the base. Finally, make a third class that is a friend of derived and calculate the difference of the base
//   complex number and its own complex number.
#include <iostream>
using namespace std;
class complex
{
protected:
    int real, img;

public:
    void getData()
    {
        cout << "Enter a complex number(real+img)" << endl;
        cin >> real >> img;
    }
    void showData()
    {
        cout << "Real(base_class) = " << real << "Imag = " << img << endl;
    }
};
class adder : public complex
{
    int r, i;

public:
    void getData()
    {
        complex::getData();
        cout << "Enter another complex number you want to add" << endl;
        cin >> r >> i;
    }
    adder adds(void)
    {
        adder temp;
        temp.r = r + complex::real;
        temp.i = i + complex::img;
        return temp;
    }
    void showData()
    {
        cout << "Real(derived 1st)= " << r << "Imag = " << i << endl;
    }
    friend class derived;
};
class derived
{
    int real, img;

public:
    void getData()
    {
        cout << "Enter a complex number(real+img)" << endl;
        cin >> real >> img;
    }
    derived subtract(adder c)
    {
        derived temp;
        temp.real = real - c.r;
        temp.img = img - c.i;
        return temp;
    }
    void showData()
    {
        cout << "Real(derived2) = " << real << "Imag = " << img << endl;
    }

};
int main()
{
    adder c, e;
    derived d, f;
    c.getData();
    cout <<"After addition";
    e = c.adds();
    e.showData();
    d.getData();
    f = d.subtract(e);
    f.showData();

}