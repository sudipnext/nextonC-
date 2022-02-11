// Write a program using the function overloading that converts feet to inches.
//  Use function with no argument, one argument and two arguments. Decide yourself 
//  the types of arguments. Use pass by reference in any one of the function above.
#include <iostream>
using namespace std;

void converter();
void converter(float &);
void converter(float &, float &);

int main()
{
    float x,y;
    cout << "Enter the data you want to convert from feet to inches";
    cin >> x >> y;
    converter();
    // converter(x,y);
}

void converter(float &x){
    cout << "type 1\n";
    cout << x *12;
}
void converter(float &x, float &y){
    cout << "type 2\n";
    cout << x *12;
}
void converter(){
    cout << "PLEASE ENTER A VALUE";
}