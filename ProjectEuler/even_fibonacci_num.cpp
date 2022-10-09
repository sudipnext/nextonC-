#include<iostream>
using namespace std;

int main(){
    int first=0;
    int second=1;
    int third;
    int sum=0;
    while(second < 4000000){
        third = first + second;
        first=second;
        second=third;
        if(second % 2 == 0){
            sum += second;
        }
    }
    cout <<endl<< "The Sum of even fibonacci numbers not exceeding 4 million is "<<sum;
}