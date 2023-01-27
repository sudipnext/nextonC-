#include<iostream>
#include "myFunctions.h";
using namespace std;


int main(){
    int n1, n2, res;
    cout << "Enter two numbers to find LCM";
    cin >> n1, n2;
    cout << lcm(n1, n2);
}