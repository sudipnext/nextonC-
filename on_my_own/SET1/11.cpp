#include <iostream>
#include<fstream>
using namespace std;

int main(){
    ofstream out("welcome.txt");
    out << "Welcome to ERC";
    out.close();
    cout << "file is created sucessfully";
}