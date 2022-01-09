#include<iostream>
using namespace std;

int main(){
    int a;
    int b;
    cout << "Enter a number you want to divide first and then the divider"<< endl;
    cin >> a >> b;
    cout << "The final quotient and reminder are "<< a/b <<endl<<a%b;
    return 0;
}