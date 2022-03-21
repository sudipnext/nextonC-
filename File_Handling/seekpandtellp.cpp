#include<iostream>
#include<fstream>
using namespace std;

int main(){
    int position;
    ofstream writing("read.txt");
    writing.seekp(6, ios::beg);
    position = writing.tellp();
    cout << "The position of the pointer is "<< position<<endl;
    writing.seekp(10, ios::beg);
    position = writing.tellp();
    cout << "The positon of the pointer is "<< position << endl;
    return 0;
}