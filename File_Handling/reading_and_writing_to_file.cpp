#include<iostream>
#include <fstream>
using namespace std;


int main(){
    char name[20];
    int roll, oop, ecm, maths, micro, chem;
    ofstream writing("reading_writing.txt");
    cout << "Enter the name."<<endl;
    cin >> name;
    cout << "Enter the roll.no:- "<<endl;
    cin >> roll;
    cout << "Enter the marks in the subjects:- ";
    cin >> oop>> ecm>> maths>>micro>> chem;

    //now writhing to the file
    writing << name << endl<< roll<<endl;
    writing <<oop<<endl<<ecm<<endl<<maths<<endl<<micro<<endl<<chem;
    return 0;


}