// Write a class that can store Department ID and Department Name with constructors to initialize its members.
// Write destructor member in the same class and display the message "Object n goes out of the scope".
//  Your program should be made such that it should show the order of constructor and destructor invocation.
#include <iostream>
#include<string.h>
using namespace std;
class Department
{
private:
    int deptId;
    char deptName[50];

public:
    Department(){
        cout << "Constructor here"<<endl;
        deptId = 12;
        char deptNae[] = "Pratik Department Store";
        strcpy(deptName, deptNae);
    }
    ~Department(){
        cout << "Object n goes out of the scope"<<endl;
    }
    char showData(){
        cout << deptName<<endl;
    }
};
int main()
{
    Department obj;
    obj.showData();
}