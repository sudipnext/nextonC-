// Euclidean Algorithm
#include <iostream>
#include "myFunctions.h";
using namespace std;


int main()
{
    
    int res, n1, n2;
    cout << "Enter two numbers"<< endl;
    cin >> n1 >> n2;
    // simpler one

    // while (n1 != n2)
    // {
    //     if (n1 > n2)
    //     {
    //         n1 = n1 - n2;
    //     }
    //     else
    //     {
    //         n2 = n2 - n1;
    //     }
    // }
    // cout << n1;

    //efficient one using recursion
    cout << gcd(n1, n2);
}