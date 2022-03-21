#include<iostream>
#include<fstream>
using namespace std;

int main(){
    char x[20];
    ifstream read("myfile.txt");
    read >> x;
    while(read){
        cout << x;
        read >> x;
    }
    read.close();
    return 0;
}