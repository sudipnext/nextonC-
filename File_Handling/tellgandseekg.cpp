#include<iostream>
#include<fstream>
using namespace std;

int main(){
    int position;
    ifstream reading("read.txt");
    position = reading.tellg();
    cout << "The position of the pointer is "<< position<<endl;
    reading.seekg(10, ios::beg);
    position = reading.tellg();
    cout << "The positon of the pointer is "<< position << endl;
    return 0;
}