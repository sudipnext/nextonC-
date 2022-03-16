// Create a class Person and two derived classes Employee and Student, inherited from class Person. Now create a class Manager
// which is derived from two base classes Employee and Student. Show the use of the virtual base class.
#include <iostream>
using namespace std;
class person
{
    protected:
    string name;
    int age;

public:
    void getData()
    {
      cout << "i am the base class"<<endl;
    }
    void happy()
    {
        cout << "I am happy!"<<endl;
    }
};
class Employee : virtual public person
{
    protected:
    int salary;

public:
    void getData()
    {
        person::getData();
        cout << "i am the first derived class of employee " << endl;
    }
    void happy()
    {
        cout << "I am happy with my salary"<<endl;
    }
};
class Student : virtual public person
{
    protected:
    int id;

public:
    void getData()
    {
        person::getData();
        cout << "student" << endl;
    }
    void happy()
    {
        cout << "I am not happy because of assignments"<<endl;
    }
};
class Manager : public Student, Employee
{
    int n;
    public:
    void getData(){
        Student::getData();
        Employee::getData();
        cout << "manager "<<endl;
    
    }
    void happy(){
        cout << "I am always happy"<<endl;
    }
};
int main()
{
    Employee e;
    Student s;
    Manager m;
    e.getData();
    e.happy();
    s.getData();
    s.happy();
    m.getData();
    m.happy();
}
