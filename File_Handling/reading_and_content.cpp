#include <iostream>
#include <fstream>
#include <stdlib.h>
#include <iomanip>

using namespace std;

int main()
{
    char text, filename[20];
    cout << "Enter a file name?:- " << endl;
    cin >> filename;
    ifstream reading(filename);
    if (reading.bad())
    {
        cout << "Error opening file";
        exit(1);
    }
    cout << "The content form the file "<<filename<< " is:"<<endl;
    while(reading.eof()==0){
        reading.get(text);
        cout << text;

    }
    return 0;
}