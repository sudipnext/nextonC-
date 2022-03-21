#include<iostream>
#include<fstream>
using namespace std;
class student{
    private:
    char name[20];
    int roll;
    float percent;
    public:
    void ReadData(){
        cout << "Enter the Name:- "<<endl;
        cin >> name;
        cout << "Enter roll"<< endl;
        cin >> roll;
        cout << "Enter percent"<< endl;
        cin >> percent;
    }
};
int main(){
    student s;
    s.ReadData();
    ofstream writing("student.txt");
    writing.write((char *)&s, sizeof(s));
    cout << "File was created sucessfully";
    return 0;
}