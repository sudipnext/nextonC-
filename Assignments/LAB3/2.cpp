// Assume that you want to check whether the number is prime or not. 
// Write a program that asks for numbers repeatedly. When it finishes checking
//  a number the program asks if the user wants to do another calculation. The response 
// can be 'y' or 'n'. Don't forget to use the object-oriented concept.
#include <iostream>
using namespace std;

class Test
{
public:
    int check(int x)
    {
        int i, p = 0;

        for (i = 2; i < x; i++)
        {
            if (x % i == 0)
            {
                p = 1;
                break;
            }
        }
        return p;
    }
};

int main()
{

    int x, p;
    char check;
    bool toggle = true;

    while (toggle)
    {
        cout << "\nEnter a number:";
        cin >> x;
        Test obj;
        p = obj.check(x);
        if (p == 0)
        {
            cout << "\nNumber is prime:" << x;
        }
        else
        {
            cout << "\nNumber is not prime:" << x;
        }
        cout << "\nwant to enter more y/n\n";
        
        cin >> check;
        if(check == 'y'|| check == 'Y'){
            toggle = true;
        }
        else{
            toggle = false;
        }
    }

    return 0;
}