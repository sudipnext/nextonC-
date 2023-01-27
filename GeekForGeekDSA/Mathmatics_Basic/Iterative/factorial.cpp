//This is a example of iterative solution of factorial

#include<iostream>
using namespace std;


int main(){
    int d, fact=1;

    cout<< "Enter a Number To calculate Factorial";
    cin >> d;
    for(int i=2; i<= d; i++){
        fact *= i;
    }
    cout<< fact;
}