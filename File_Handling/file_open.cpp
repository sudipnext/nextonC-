#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    ofstream x;
    x.open("myfile.txt");
    x << "Welcome to the ERC";
    x.close();
    cout << "File has been written sucessfully!";
}