// Write a program with an abstract class Student and create derive classes Engineering, Medicine and Science from base class Student.
//  Create the objects of the derived classes and process them and access them using an array of pointers of type base class Student.
#include <iostream>
using namespace std;

class Student
{
public:
    virtual void subjects() = 0; // pure virtual function or abstract class which is hard to use
};
class Engineering : public Student
{
public:
    void subjects()
    {
        cout << "I study enginnering subjects" << endl;
    }
};
class Medicine : public Student
{
public:
    void subjects()
    {
        cout << "I study medical subjects" << endl;
    }
};
class Science : public Student
{
public:
    void subjects()
    {
        cout << "I study pure science subjects" << endl;
    }
};
int main()
{
    Engineering e;
    Science s;
    Medicine m;
    Student *sptr[] = {&e, &s, &m};
    for(int i=0; i<3; i++)
        sptr[i]->subjects();
    
    
}