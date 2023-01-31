#include<iostream>
using namespace std;


int fact_of_n(int n){
    if(n==0){
        return 1;
    }
    return n*fact_of_n(n-1);
    
}

int main(){
    cout << fact_of_n(12);
}