#include <iostream>

using namespace std;

int main()
{
     int d, fact=1, count = 0;

    cout<< "Enter a Number To calculate Factorial";
    cin >> d;
    for(int i=2; i<= d; i++){
        fact *= i;
    }
    cout << fact<<endl;
    while (fact % 10 == 0)
    {
        count ++;
        fact /= 10;
    }
    cout << count<<endl;
}
