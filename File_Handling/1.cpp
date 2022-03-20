#include<iostream>
#include<fstream>
using namespace std;

int main(){
    //opening/creating of file
    char arr[100];
    cout << "Enter a line you want to store in the file";
    cin.getline(arr, 100);
    ofstream myfile("Hello.txt");
    myfile << arr;
    myfile.close();
    cout << "File writing sucessfull!"<<endl;
    //reading files
    char arr1[100];
    ifstream obj("Hello.txt");
    obj.getline(arr1, 100);
    cout << "here is :- "<<arr1;
}