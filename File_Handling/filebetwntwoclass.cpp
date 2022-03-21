#include <iostream>
#include <fstream>
using namespace std;
class student
{
private:
    char name[20];
    int roll, marks;

public:
    void getData()
    {
        cout << "Name:- " << endl;
        cin >> name;
        cout << "Roll:- " << endl;
        cin >> roll;
        cout << "Marks:- " << endl;
        cin >> marks;
    }
    void display()
    {
        cout << endl
             << name;
        cout << endl
             << roll;
        cout << endl
             << marks;
    }
};
int main()
{
    student obj1, obj2;
    fstream inout("Hello.txt", ios::in | ios::out);
    obj1.getData();
    inout.write((char *)&obj2, sizeof(obj2));
    cout <<"*************";
    // inout.seekg(0, ios::beg);
    inout.read((char *)&obj1, sizeof(obj1));
    obj1.display();
    return 0;
}