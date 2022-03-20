#include <iostream>
#include <fstream>
#include<iomanip>
using namespace std;

int main()
{
    char name[20];
    int roll, oop, ecm, maths, micro, chem;
    ifstream reading("reading_writing.txt");
    cout << "READING STARTED!";
    reading >> name >> roll;
    reading >> oop >> ecm >> maths >> micro >> chem;
    cout << endl
         << "*****************************************";
    cout << endl
         << "                      MARKSHEET";
    cout << "The details are as follows:- ";
    cout << endl
         << "OOP" << oop;
    cout << endl
         << "ecm" << oop;

    cout << endl
         << "maths" << ecm;

    cout << endl
         << "micro" << maths;
    cout << endl
         << "chem" << micro;
    cout << endl
         << "OOP" << chem;
    cout << endl
         << "OOP" << roll;
    cout << endl
         << "Name:- " << setw(12) << name<< setw(8)<< name;
    reading.close();
    return 0;
}