#include <iostream>
#include <fstream>
using namespace std;

class Book
{
private:
    int libno;
    int id;
    char author[20];

public:
    void getData()
    {
        cout << "Enter the lib.no, id and author respectively:- ";
        cin >> libno >> id >> author;
    }
    void display()
    {
        cout << endl
             << "libno:- " << libno;
        cout << endl
             << "id:- " << id;
        cout << endl
             << "Author:- " << author;
    }
};
int main()
{
    int i;
    Book b1[10], b;
    cout << "Reading 10 data :- ";
    for(i=0; i<10; i++){
        b1[i].getData();
    }
    fstream inout("new.txt", ios::in | ios::out | ios::binary | ios::ate);
    for(i=0; i<10; i++){
        inout.write((char *)&b1[i], sizeof(b1));
    }
    cout << "The fourth record is : -"<<endl;
    inout.clear();
    inout.seekg(0, ios::beg);
    i=0;
    while(inout.read((char *)&b, sizeof(b)>0)){
        i++;
        if(i == 4){
            b.display();
            break;
        }
    }
    inout.close();
}