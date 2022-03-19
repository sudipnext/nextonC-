#include<iostream>
using namespace std;

int main(){
    int* integerpointer;
    float* floatpointer;
    //dynamically allocating memory
    integerpointer = new int;
    floatpointer = new float;
    //assigning values

    *integerpointer = 12;
    *floatpointer = 12.2;
    //printing
    cout << integerpointer<<endl;
    cout << floatpointer<<endl;
    cout << *integerpointer <<endl;
    cout << *floatpointer<<endl;
    //deallocating memory

    delete integerpointer;
    delete floatpointer;

}
///////////////////////////////////////// using objects////////////////////////////////////////////////////////////////////////////////////////
#include <iostream>
using namespace std;
class student
{
    int age;

public:
    void getdata()
    {
        cout << "Enter your age?" << endl;
        cin >> age;
    }
    void display()
    {
        cout << "The input age was " << age << endl;
    }
};
int main()
{
    student *sptr = new student();
    sptr->getdata();
    sptr->display();

    // memory released
    delete sptr;
}
////////////////////////////////////in C programming ////////////////////////////////////////////////////////////////
//<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<
#include<stdio.h>

int main(){
    int * x;
    float * y;
    x= (int *)malloc(n *sizeof(int));
    y =(int *)calloc(n, sizeof(int));
}