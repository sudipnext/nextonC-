// Write three derived classes inheriting functionality of base class person (should have a member function that asks to enter name and age)
//  and with added unique features of student, and employee, and functionality to assign, change and delete records of student and employee.
//  And make one member function for printing the address of the objects of classes (base and derived) using this pointer. Create two objects
//   of the base class and derived classes each and print the addresses of individual objects. Using a calculator, calculate the address space
//    occupied by each object and verify this with address spaces printed by the program.
#include <iostream>
using namespace std;
class person
{
    string name;
    int age;

public:
    void getData()
    {
        cout << "Enter your name?"<<endl;
        cin >> name;
        cout << "Enter your Age?"<<endl;
        cin >> age;
    }
    void showData(){
        cout << "The name and age is " << name << age << endl;
    }
    void showAddr(){
        cout << "The address is "<< this<<endl;
    }
};
class student : public person
{
    int ID;

public:
    void getData()
    {
        cout << "Enter student details"<<endl;
        person::getData();
        cout << "Enter your id?"<<endl;
        cin >> ID;
    }
};
class employee : public person
{
    int salary;

public:
    void getData()
    {
        person::getData();
        cout << "Enter salary?";
        cin >> salary;
    }
    void showData(){
        cout << "The details are overridden";
    }

};

int main()
{
    student s;
    employee e;
    s.getData();
    e.getData();
    e.showData();
    s.showAddr();
    s.showData();

}