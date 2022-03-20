#include <fstream>
#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    char txt[20];
    // char txt[]= "PURWANCHAL";
    cin.getline(txt, 20);

    int n = strlen(txt);
    for (int i = 0; i <= n; i++)
    {
        cout.write(txt, i);
        cout << endl;
    }
}