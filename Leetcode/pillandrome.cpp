#include <iostream>
using namespace std;

int main()
{

    int n, temp, rem, wholenum=0;
    cout << "Enter a number: ";
    cin >> temp;
    n=temp;
    while (n > 0)
    {
        rem = n % 10;  
        wholenum = wholenum * 10 + rem; 
        n = n / 10; 
    }
    if(temp==wholenum){
        cout << "Hi";
    }

    return 0;
}