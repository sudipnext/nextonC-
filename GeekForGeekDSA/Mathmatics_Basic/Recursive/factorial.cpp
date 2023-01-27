//This is a example of recursive solution of factorial

#include<iostream>
using namespace std;

int fact(int n){
    if(n==0){
        return 1;
    }
    return fact(n-1)*n;
}

int main(){
    int d;
    cout<< "Enter a Number To calculate Factorial";
    cin >> d;
    cout << fact(d);
}