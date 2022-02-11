// Write a simple program that converts the temperature in Celsius scale to Fahrenheit scale
// and vice versa using the basic concept of class and object. Make separate classes for Celsius
// and Fahrenheit which will have the private members that hold the temperature value and make
// conversion functions in each class for conversion from one to another. For example, you need
// to have a function toFahrenheit() in class Celsius that converts to Fahrenheit scale and returns the value.
#include <iostream>
using namespace std;
class Celsius
{
private:
    float celsius, fahren;

public:
    float toFarhenheit(float x)
    {
        celsius = x;
        fahren = (x * 9 / 5) + 32;
        return fahren;
    }
};
class Fahrenheit
{
private:
    float celsius, fahren;

public:
    float toCelsius(float y)
    {
        fahren = y;
        celsius = (y - 32) * 5 / 9;
        return celsius;
    }
};

int main()
{
    Celsius t;
    Fahrenheit x;
    float a;
    int type;
    cout << "Choose a conversion type:- for Farhenheit to celsius-1 and for celsius to Farhenheit-2//default is celsius to farhenheit converter\n";
    cin >> type;
    if (type == 2)
    {
        cout << "Enter the temperature in celsius\n";
        cin >> a;
        cout <<"\nThe converted tempr in Farhenheit is "<< t.toFarhenheit(a);
    }else{
        cout << "Enter the tempr in Farhenheit\n";
        cin >> a;
        cout << "\nThe converted tempr in celsius is "<< x.toCelsius(a);
    }
    return 0;
}