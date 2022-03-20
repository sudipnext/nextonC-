#include<iostream>
#include <fstream>

using namespace std;

int main(){
    char dataa[30];
    ifstream rxi;
    rxi.open("myfile.txt");
    if(rxi.fail()){
        cout << "ERror opening file";
        exit(1);
    }
    rxi.close();

}