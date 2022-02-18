// Write a program that has a class with a dynamically allocated character array as its data member.
// One object should contain "Engineers are" and another should contain " Creatures of logic".
//  Member function join() should concatenate two strings by passing two objects as arguments.
//   Display the concatenated string through a member function. Use constructors to allocate and initialize the data member. Also,
// write a destructor to free the allocated memory for the character array. Make your own function for the concatenation of two strings.
#include <iostream>
#include <cstring>
using namespace std;
class Characters
{
private:
    // initializing the pointer variable to null
    char *start, *endt;

public:
    // using constructor to initalize
    Characters(char *start, char *endt)
    {
        strcpy(start, "Engineers are");
        strcpy(endt, " Creatures of logic");
        cout << "\nconstructor is called";
    }
    // using destructor

    char join(Characters &x, Characters &y)
    {
        
    }
    ~Characters()
    {
        delete [] start;
        delete [] endt;
    }
};

int main()
{
    Characters a;
    return 0;
}