// Write a program that has a class with a dynamically allocated character array as its data member.
// One object should contain "Engineers are" and another should contain " Creatures of logic".
//  Member function join() should concatenate two strings by passing two objects as arguments.
//   Display the concatenated string through a member function. Use constructors to allocate and initialize the data member. Also,
// write a destructor to free the allocated memory for the character array. Make your own function for the concatenation of two strings.
#include<iostream>

#include<cstring>
using namespace std;
class dyna
{
    char*arr;
public:
    dyna(char*input)
    {
        arr=new char[strlen(input)];
        strcpy(arr,input);
    }
    void join(dyna&a,dyna&b )
    {
        int l1=strlen (a.arr);
        int l2=strlen (b.arr);
        delete []arr;
        arr=new char [l1+l2+1];
        int i=0;


    while(i<l1)
    {
        arr [i]=a.arr[i];
        i++;
    }
    while(i<l1+l2)
    {
        arr[i]=b.arr[i-l1];
        ++i;
    }
    arr[l1+l2]='\0';
    }
    void show()
    {
        cout<<arr<<endl;
    }
    ~dyna()
    {
        delete[]arr;
    }

};
int main()
{
    char c1[]="Engineers are";
    char c2[]="creatures of logic";
    char c3[]=" ";
    dyna lt(c1);
    dyna yt(c2);
    dyna t1(c3);
    t1.join(lt,yt);
    t1.show();
    return 0;

}