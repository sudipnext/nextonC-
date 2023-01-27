#include<iostream>
using namespace std;

int main(){
    int n, count=0;
    cout << "Enter a Number to find the count of digits";
    cin >> n;
    while (n!=0)
    {
        ++count;
        n/=10;
    }
    cout << count;
    
}