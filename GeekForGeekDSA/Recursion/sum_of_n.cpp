#include<iostream>
using namespace std;

int getSum(int n, int k){
    if(n<=0){
        return k;
    }
    return getSum(n-1, k+n);
}

int main(){

    cout<< getSum(3,0);
}