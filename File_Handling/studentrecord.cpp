#include<iostream>
#include<fstream>
using namespace std;
class student{
    private:
    char name[20];
    int roll;
    float percentage;
    public:
    void display(){
        cout << endl<< name;
        cout <<endl<< roll;
        cout << endl<< percentage;

    }
};

int main(){
    student st;
    ifstream reading("student.txt");
    reading.read((char *)&st, sizeof(st));
    cout <<"The data from the file is "<<endl;
    st.display();

}