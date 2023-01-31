#include<stdio.h>

long int fact(int n){
    if(n==0){
        return 1;
    }else{
        return n *fact(n-1);
    }
}

int main(){
    int n;
    printf("Enter a number n\n ");
    scanf("%d", &n);
    printf("The factorial of the number %d is \n", fact(n));
    return 0;
}