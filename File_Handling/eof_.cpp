#include<iostream>
#include<fstream>

using namespace std;

int main(){
    char data[50];
    ifstream read;
    read.open("myfile.txt");
    read >> data;
    while(read.eof()==0){
        cout << data<<endl;
        read >> data;
    }
    read.close();
    return 0;


}