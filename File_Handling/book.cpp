#include<iostream>
#include<fstream>
using namespace std;

class Book{
    private:
    int libno;
    int id;
    char author[20];
    public:
    void getData(){
        cout << "Enter the lib.no, id and author respectively:- ";
        cin >> libno >> id>>author;
    }
    void display(){
        cout <<endl<< "libno:- "<< libno;
        cout <<endl<< "id:- "<< id;
        cout << endl<< "Author:- "<< author;
    }
};
int main(){
    Book b1[10], b2;
    for (int i =0; i<10; i++)
        b1[i].getData();
    fstream file("bookdata.txt", ios::in | ios::out);
    for (int j =0; j<10; j++)
        file.write((char *)&b1[j], sizeof(b1[j]));
    cout << "Data has been written sucessfully!";
    
}