#include <iostream>
#include <fstream>
using namespace std;

int main(){
    ofstream writing_to_file("writing_in_file.txt");
    writing_to_file << "Welcome to ERC/ PURWANCHAL CAMPUS";
    writing_to_file.close();
    cout << "File has been written sucessfully!";
    return 0;
}