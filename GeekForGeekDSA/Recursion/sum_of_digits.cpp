#include<iostream>
using namespace std;

int sumOfDigits(){
    
}

int main(){
int x, s = 0;
   cout << "Enter the number : ";
   cin >> x;
   while (x != 0) {
      s = s + x % 10;
      x = x / 10;
   }
}