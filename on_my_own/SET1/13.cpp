#include <iostream>
#include <fstream>
using namespace std;

int main(){
    char arr[100];
    cout << "Enter your name and age :- ";
    cin.getline(arr, 100);

    ofstream myfile("xyz.txt", ios::app);
    myfile <<arr;
    myfile.close();
    cout << "File writing performed sucessfully!"<<endl;
    
    cout << "Reading started"<<endl;
    char arr1[100];
    ifstream obj("xyz.txt");
    obj.getline(arr1, 100);
    cout << "array content: "<< arr1<<endl;
    cout << "File read operation sucessfull"<<endl;
    obj.close();
    

    return 0;
}