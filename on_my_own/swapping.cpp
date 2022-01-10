#include <iostream>
using namespace std;

int main(){
    int a, b, t;
    cout << "Enter first number and second number respectively";
    cin >> a >> b;
    t=a;
    a=b;
    b=t;
    cout << "The swapped numbers are " << a <<endl<< b << "respectively";
    return 0;


}