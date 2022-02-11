// Assume that employee will have to pay 10 percent income tax to the government.
//  Ask user to enter the employee salary. Use inline function to display the net
//  payment to the employee by the company.

#include <iostream>

using namespace std;
inline float netpay(int x){
    return x * 90/100;
}

int main(){
    float sal;
    cout <<"Enter the employee salary\n";
    cin >> sal;
    cout << netpay(sal) <<endl;
}