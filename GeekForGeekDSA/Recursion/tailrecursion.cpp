#include<iostream>
using namespace std;

int tail_fact(int n, int k){
    if(n==1){
        return k;
    }else{
        return tail_fact(n-1, n*k);
    }
}

int main(){
   cout << tail_fact(12, 1);
}