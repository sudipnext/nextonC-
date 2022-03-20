#include<iostream>
#include<fstream>
using namespace std;

int main(){
    char filename1[20], filename2[20], ch;
    cout << "Enter the source filename:- "<<endl;
    cin >> filename1;
    cout << "Enter the destination filename:- "<<endl;
    cin >> filename2;
    ifstream read(filename1);
    ofstream write(filename2);
    if(read.bad()){
        cout << "Error reading the file........"<<endl;
        exit(1);
    }
    read.get(ch);
    while(read.eof()==0){
        write.put(ch);
        read.get(ch);
    }
    cout << "File has been copied Sucessfully!";
}