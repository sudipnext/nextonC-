#include<iostream>
#include<vector>

using namespace std;

void sieve(int n){
    vector<bool> isPrime(n+1, true);
    for(int i=2; i*i <=n; i++){
        if(isPrime[i]){
            // cout << i <<" "; uncomment this if you want to better optimise you don't need to write the below for loop
            for(int j=2*i; j<=n; j+=i){ // we can better optimise this by placing i*i instead of 2*i
                isPrime[j]= false;
            }
        }
    }
    for(int i=2; i<=n; i++){
        if(isPrime[i]){
            cout<< i<< "";
        }
    }
}
int main(){
    int n;
    cin >> n;
    sieve(12);
}