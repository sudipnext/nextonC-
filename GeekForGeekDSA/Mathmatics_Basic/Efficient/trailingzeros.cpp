//The logic is basically what we are doing is we are counting the prime factorials of the numbers and we know 2 and 5 are responsible for the zeros so we are taking 5 cause it occurs less than 2 
#include<iostream>
using namespace std;

int main(){
    int res=0, n;

    cout << "Enter a number you want to count"<<endl;
    cin >> n;
    for(int i=5; i<=n; i*=5){
        res = res + n/i;
    }
    cout << res;
}