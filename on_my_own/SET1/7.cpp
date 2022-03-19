#include <iostream>
using namespace std;

int main()
{
    int x;
    char arr[10];
    char str[] = "Out of range";
    cout << "Enter the value of x";
    cin >> x;
    try
    {
        for (int i = 0; i <= 10; i++)
        {
            if (x == 0)
                throw x;

            if (i > 9)
                throw str;
        }
    }
    catch (...){
        cout << "Exception occurs";
    }
    // catch (int a)
    // {
    //     cout << "Exception occurs :- " << a;
    // }
    // catch (char b[])
    // {
    //     cout << "Exception occurs:- " << b;
    // }
}